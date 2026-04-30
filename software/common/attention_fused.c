#include "attention.h"

#include "bfloat16_utils.h"

#include <string.h>

static int min_int(int a, int b) {
  return (a < b) ? a : b;
}

static int validate_dims(
    int ldq,
    int ldk_t,
    int ldv,
    int ldout,
    int q_rows,
    int kv_rows,
    int d_k,
    int value_cols) {
  if (ldq < d_k || ldk_t < kv_rows || ldv < value_cols || ldout < value_cols) {
    return 0;
  }
  if (q_rows < 0 || kv_rows < 0 || d_k < 0 || value_cols < 0) {
    return 0;
  }
  if (q_rows > 0 && (kv_rows == 0 || d_k == 0 || value_cols == 0)) {
    return 0;
  }
  return 1;
}

static int validate_fused_workspace(
    const attention_fused_workspace_t *workspace,
    int q_rows,
    int kv_rows,
    int d_k,
    int value_cols) {
  if (workspace == 0 || workspace->q_tiles == 0 || workspace->k_tiles == 0 ||
      workspace->v_tiles == 0 || workspace->out_words == 0) {
    return 0;
  }
  if (workspace->tile_rows <= 0 || workspace->tile_rows > ATTENTION_FUSED_TILE_ROWS ||
      workspace->tile_cols <= 0 || workspace->tile_cols > ATTENTION_FUSED_TILE_COLS) {
    return 0;
  }
  if (workspace->fused_max_k <= 0) {
    return 0;
  }
  if (q_rows > workspace->max_q_rows || kv_rows > workspace->max_kv_rows ||
      d_k > workspace->max_d_k || value_cols > workspace->max_value_cols) {
    return 0;
  }
  if (kv_rows > workspace->fused_max_k || d_k > workspace->fused_max_k) {
    return 0;
  }
  return 1;
}

static int validate_fused_params(
    const attention_params_t *params) {
  if (params == 0) {
    return 1;
  }
  return params->mask_bf16 == 0;
}

static inline uint16_t unpack_bf16_lane(uint64_t packed_word, int lane) {
  return (uint16_t)((packed_word >> (16 * lane)) & 0xFFFFu);
}

static void copy_output_tile_bf16(
    const uint64_t *out_words,
    int tile_rows,
    int tile_cols,
    int active_rows,
    int active_cols,
    uint16_t *output,
    int ldout,
    int m0,
    int n0) {
  for (int r = 0; r < tile_rows; r++) {
    for (int c = 0; c < tile_cols; c++) {
      if (r < active_rows && c < active_cols) {
        const int phys_idx = r * tile_cols + c;
        const int word_idx = phys_idx / ATTENTION_FUSED_BF16S_PER_WORD;
        const int lane_idx = phys_idx % ATTENTION_FUSED_BF16S_PER_WORD;
        output[(m0 + r) * ldout + (n0 + c)] =
            unpack_bf16_lane(out_words[word_idx], lane_idx);
      }
    }
  }
}

static void accumulate_perf_counters(attention_fused_stats_t *stats) {
  if (stats == 0) {
    return;
  }
  uint64_t counters[ATTN_FUSED_PERF_COUNT];
  attention_fused_read_perf_counters(counters);
  for (int i = 0; i < ATTN_FUSED_PERF_COUNT; i++) {
    stats->perf[i] += counters[i];
  }
}

void attention_fused_clear_stats(attention_fused_stats_t *stats) {
  if (stats != 0) {
    memset(stats, 0, sizeof(*stats));
  }
}

int attention_fused_bf16(
    const uint16_t *Q,
    int ldq,
    const uint16_t *K_t,
    int ldk_t,
    const uint16_t *V,
    int ldv,
    int q_rows,
    int kv_rows,
    int d_k,
    int value_cols,
    uint16_t *output,
    int ldout,
    const attention_fused_workspace_t *workspace,
    const attention_params_t *params,
    attention_fused_stats_t *stats) {
  ws_gemm_packed_b_t packed_k_t;
  ws_gemm_packed_b_t packed_v_tile;

  if (!validate_dims(ldq, ldk_t, ldv, ldout, q_rows, kv_rows, d_k, value_cols)) {
    return ATTENTION_FUSED_ERR_BAD_DIMS;
  }
  if ((q_rows > 0 && d_k > 0 && Q == 0) ||
      (kv_rows > 0 && d_k > 0 && K_t == 0) ||
      (kv_rows > 0 && value_cols > 0 && V == 0) ||
      (q_rows > 0 && value_cols > 0 && output == 0)) {
    return ATTENTION_FUSED_ERR_NULL;
  }
  if (!validate_fused_workspace(workspace, q_rows, kv_rows, d_k, value_cols)) {
    return ATTENTION_FUSED_ERR_WORKSPACE;
  }
  if (!validate_fused_params(params)) {
    return ATTENTION_FUSED_ERR_UNSUPPORTED;
  }

  attention_fused_clear_stats(stats);
  if (q_rows == 0 || value_cols == 0) {
    return ATTENTION_FUSED_OK;
  }

  const int measure = (stats != 0);
  const uint64_t total_start = measure ? attention_read_cycles() : 0;
  const float scale = (params != 0) ? params->scale : 1.0f;
  const uint16_t scale_bf16 = float_to_bf16(scale);
  const int causal = (params != 0) ? params->causal : 0;
  const int query_position_base = (params != 0) ? params->query_position_base : 0;

  const int q_pack_rc = ws_gemm_pack_a_bf16_tiled(
      Q,
      ldq,
      q_rows,
      d_k,
      workspace->q_tiles,
      workspace->max_q_rows,
      workspace->max_d_k,
      workspace->tile_rows,
      measure ? &stats->stage.q_pack_cycles : 0);
  if (q_pack_rc != WS_GEMM_OK) {
    if (measure) {
      stats->total_cycles = attention_read_cycles() - total_start;
    }
    return ATTENTION_FUSED_ERR_Q_PACK;
  }

  const int k_pack_rc = ws_gemm_prepare_packed_b_bf16_tiled(
      K_t,
      ldk_t,
      kv_rows,
      d_k,
      workspace->k_tiles,
      workspace->max_kv_rows,
      workspace->fused_max_k,
      workspace->tile_cols,
      &packed_k_t,
      measure ? &stats->stage.k_pack_cycles : 0);
  if (k_pack_rc != WS_GEMM_OK) {
    if (measure) {
      stats->total_cycles = attention_read_cycles() - total_start;
    }
    return ATTENTION_FUSED_ERR_K_PACK;
  }

  for (int n0 = 0; n0 < value_cols; n0 += workspace->tile_cols) {
    const int tile_value_cols = min_int(workspace->tile_cols, value_cols - n0);
    const uint16_t *v_tile_base = V + n0;
    uint64_t *v_tile_words = workspace->v_tiles;

    const int v_pack_rc = ws_gemm_prepare_packed_b_bf16_tiled(
        v_tile_base,
        ldv,
        tile_value_cols,
        kv_rows,
        v_tile_words,
        workspace->tile_cols,
        workspace->max_kv_rows,
        workspace->tile_cols,
        &packed_v_tile,
        measure ? &stats->stage.v_pack_cycles : 0);
    if (v_pack_rc != WS_GEMM_OK) {
      if (measure) {
        stats->total_cycles = attention_read_cycles() - total_start;
      }
      return ATTENTION_FUSED_ERR_V_PACK;
    }

    for (int m0 = 0; m0 < q_rows; m0 += workspace->tile_rows) {
      const int tile_q_rows = min_int(workspace->tile_rows, q_rows - m0);
      const uint64_t *q_tile_base = ws_gemm_a_tile_ptr_const(
          workspace->q_tiles, workspace->max_d_k, m0, workspace->tile_rows);

      if (measure) {
        attention_fused_clear_counters();
      }

      (void)attention_fused_set_qk_addrs(q_tile_base, packed_k_t.tiles);
      (void)attention_fused_set_vout_addrs(packed_v_tile.tiles, workspace->out_words);
      (void)attention_fused_set_dims(tile_q_rows, kv_rows, d_k, tile_value_cols);
      (void)attention_fused_set_params_bf16(
          scale_bf16, causal, query_position_base + m0);

      const uint64_t hw_start = measure ? attention_read_cycles() : 0;
      const uint64_t run_rc = attention_fused_run();
      if (measure) {
        stats->hw_e2e_cycles += attention_read_cycles() - hw_start;
      }
      if (run_rc != 0) {
        if (measure) {
          stats->total_cycles = attention_read_cycles() - total_start;
        }
        return ATTENTION_FUSED_ERR_RUN;
      }

      if (measure) {
        accumulate_perf_counters(stats);
      }

      const uint64_t copy_start = measure ? attention_read_cycles() : 0;
      copy_output_tile_bf16(
          workspace->out_words,
          workspace->tile_rows,
          workspace->tile_cols,
          tile_q_rows,
          tile_value_cols,
          output,
          ldout,
          m0,
          n0);
      if (measure) {
        stats->stage.copy_out_cycles += attention_read_cycles() - copy_start;
      }
    }
  }

  if (measure) {
    stats->total_cycles = attention_read_cycles() - total_start;
  }

  return ATTENTION_FUSED_OK;
}
