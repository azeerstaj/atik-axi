#include "bfloat16_utils.h"
#include "fpga_safe_attention.h"
#include "generated/transformer_layer_cases.h"
#include "ws_gemm.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#define LN_EPSILON 0.00001f

static uint16_t ln1_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t q_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t k_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t v_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t context[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t attn_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t res1[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t ln2_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t mlp_hidden[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_HIDDEN_DIM] __attribute__((aligned(64)));
static uint16_t mlp_act[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_HIDDEN_DIM] __attribute__((aligned(64)));
static uint16_t mlp_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));
static uint16_t hw_output[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL] __attribute__((aligned(64)));

static uint16_t sw_ln1_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_q_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_k_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_v_proj[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_context[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_attn_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_res1[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_ln2_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_mlp_hidden[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_HIDDEN_DIM];
static uint16_t sw_mlp_act[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_HIDDEN_DIM];
static uint16_t sw_mlp_out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static uint16_t sw_output[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL];
static float sw_scores[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_SEQ_LEN];
static float sw_probs[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_SEQ_LEN];

static uint64_t gemm_a_tiles[
    WS_GEMM8_A_TILE_WORDS(TRANSFORMER_LAYER_MAX_SEQ_LEN, TRANSFORMER_LAYER_MAX_HIDDEN_DIM)]
    __attribute__((aligned(64)));
static uint64_t gemm_b_tiles[
    WS_GEMM8_B_TILE_WORDS(TRANSFORMER_LAYER_MAX_HIDDEN_DIM, TRANSFORMER_LAYER_MAX_HIDDEN_DIM)]
    __attribute__((aligned(64)));
static uint64_t gemm_c_words[WS_GEMM8_C_TILE_WORDS] __attribute__((aligned(64)));

static uint64_t q_tiles[
    FPGA_SAFE_ATTN_Q_TILE_WORDS(TRANSFORMER_LAYER_MAX_SEQ_LEN, TRANSFORMER_LAYER_MAX_HEAD_DIM)]
    __attribute__((aligned(64)));
static uint64_t k_tiles[
    FPGA_SAFE_ATTN_K_TILE_WORDS(TRANSFORMER_LAYER_MAX_SEQ_LEN, TRANSFORMER_LAYER_MAX_HEAD_DIM)]
    __attribute__((aligned(64)));
static uint64_t v_tiles[
    FPGA_SAFE_ATTN_V_TILE_WORDS(TRANSFORMER_LAYER_MAX_HEAD_DIM, TRANSFORMER_LAYER_MAX_SEQ_LEN)]
    __attribute__((aligned(64)));
static uint64_t attn_out_words[FPGA_SAFE_ATTN_OUT_WORDS] __attribute__((aligned(64)));

static inline uint16_t tensor_at(const uint16_t *tensor, int row, int col, int ld) {
  return tensor[row * ld + col];
}

static void layernorm_bf16(
    const uint16_t *input,
    int ldin,
    const uint16_t *gamma,
    const uint16_t *beta,
    uint16_t *output,
    int ldout,
    int rows,
    int cols) {
  for (int r = 0; r < rows; r++) {
    double sum = 0.0;
    for (int c = 0; c < cols; c++) {
      sum += (double)bf16_to_float(tensor_at(input, r, c, ldin));
    }
    const double mean = sum / (double)cols;

    double var_sum = 0.0;
    for (int c = 0; c < cols; c++) {
      const double d = (double)bf16_to_float(tensor_at(input, r, c, ldin)) - mean;
      var_sum += d * d;
    }
    const double inv_std = 1.0 / sqrt((var_sum / (double)cols) + (double)LN_EPSILON);

    for (int c = 0; c < cols; c++) {
      const double x = (double)bf16_to_float(tensor_at(input, r, c, ldin));
      const double g = (double)bf16_to_float(gamma[c]);
      const double b = (double)bf16_to_float(beta[c]);
      output[r * ldout + c] = float_to_bf16((float)(((x - mean) * inv_std * g) + b));
    }
  }
}

static void sw_matmul_bf16(
    const uint16_t *A,
    int lda,
    const uint16_t *B,
    int ldb,
    uint16_t *C,
    int ldc,
    int M,
    int N,
    int K) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      double acc = 0.0;
      for (int k = 0; k < K; k++) {
        acc += (double)bf16_to_float(tensor_at(A, i, k, lda)) *
               (double)bf16_to_float(tensor_at(B, k, j, ldb));
      }
      C[i * ldc + j] = float_to_bf16((float)acc);
    }
  }
}

static void residual_add_bf16(
    const uint16_t *A,
    int lda,
    const uint16_t *B,
    int ldb,
    uint16_t *C,
    int ldc,
    int rows,
    int cols) {
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      const float v = bf16_to_float(tensor_at(A, r, c, lda)) +
                      bf16_to_float(tensor_at(B, r, c, ldb));
      C[r * ldc + c] = float_to_bf16(v);
    }
  }
}

static void gelu_bf16(const uint16_t *input, int ldin, uint16_t *output, int ldout, int rows, int cols) {
  const float inv_sqrt2 = 0.70710678118f;
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      const float x = bf16_to_float(tensor_at(input, r, c, ldin));
      output[r * ldout + c] = float_to_bf16(0.5f * x * (1.0f + erff(x * inv_sqrt2)));
    }
  }
}

static void sw_attention_heads(
    const transformer_layer_case_t *tc,
    const uint16_t q[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL],
    const uint16_t k[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL],
    const uint16_t v[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL],
    uint16_t out[TRANSFORMER_LAYER_MAX_SEQ_LEN][TRANSFORMER_LAYER_MAX_D_MODEL]) {
  const float scale = bf16_to_float(tc->scale_bf16);
  for (int h = 0; h < tc->n_heads; h++) {
    const int base = h * tc->head_dim;
    for (int qr = 0; qr < tc->seq_len; qr++) {
      for (int kv = 0; kv < tc->seq_len; kv++) {
        double dot = 0.0;
        for (int d = 0; d < tc->head_dim; d++) {
          dot += (double)bf16_to_float(q[qr][base + d]) *
                 (double)bf16_to_float(k[kv][base + d]);
        }
        sw_scores[qr][kv] = (float)(dot * (double)scale);
      }
    }

    for (int qr = 0; qr < tc->seq_len; qr++) {
      float max_score = -INFINITY;
      for (int kv = 0; kv < tc->seq_len; kv++) {
        if (sw_scores[qr][kv] > max_score) {
          max_score = sw_scores[qr][kv];
        }
      }
      double denom = 0.0;
      for (int kv = 0; kv < tc->seq_len; kv++) {
        denom += exp((double)(sw_scores[qr][kv] - max_score));
      }
      for (int kv = 0; kv < tc->seq_len; kv++) {
        sw_probs[qr][kv] =
            (float)(exp((double)(sw_scores[qr][kv] - max_score)) / denom);
      }
    }

    for (int qr = 0; qr < tc->seq_len; qr++) {
      for (int vc = 0; vc < tc->head_dim; vc++) {
        double acc = 0.0;
        for (int kv = 0; kv < tc->seq_len; kv++) {
          acc += (double)sw_probs[qr][kv] *
                 (double)bf16_to_float(v[kv][base + vc]);
        }
        out[qr][base + vc] = float_to_bf16((float)acc);
      }
    }
  }
}

static void sw_transformer_layer(const transformer_layer_case_t *tc) {
  layernorm_bf16(tc->x, tc->d_model, tc->ln1_gamma, tc->ln1_beta,
                 &sw_ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
  sw_matmul_bf16(&sw_ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->wq, tc->d_model, &sw_q_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->seq_len, tc->d_model, tc->d_model);
  sw_matmul_bf16(&sw_ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->wk, tc->d_model, &sw_k_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->seq_len, tc->d_model, tc->d_model);
  sw_matmul_bf16(&sw_ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->wv, tc->d_model, &sw_v_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->seq_len, tc->d_model, tc->d_model);
  sw_attention_heads(tc, sw_q_proj, sw_k_proj, sw_v_proj, sw_context);
  sw_matmul_bf16(&sw_context[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->wo, tc->d_model, &sw_attn_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->seq_len, tc->d_model, tc->d_model);
  residual_add_bf16(tc->x, tc->d_model, &sw_attn_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                    &sw_res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
  layernorm_bf16(&sw_res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->ln2_gamma, tc->ln2_beta,
                 &sw_ln2_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
  sw_matmul_bf16(&sw_ln2_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->w1, tc->hidden_dim, &sw_mlp_hidden[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
                 tc->seq_len, tc->hidden_dim, tc->d_model);
  gelu_bf16(&sw_mlp_hidden[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
            &sw_mlp_act[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM, tc->seq_len, tc->hidden_dim);
  sw_matmul_bf16(&sw_mlp_act[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
                 tc->w2, tc->d_model, &sw_mlp_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                 tc->seq_len, tc->d_model, tc->hidden_dim);
  residual_add_bf16(&sw_res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                    &sw_mlp_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                    &sw_output[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
}

static int hw_gemm(
    const uint16_t *A,
    int lda,
    const uint16_t *B,
    int ldb,
    uint16_t *C,
    int ldc,
    int M,
    int N,
    int K,
    const ws_gemm_workspace_t *workspace,
    uint64_t *cycles) {
  ws_gemm_stats_t stats;
  memset(&stats, 0, sizeof(stats));
  const int rc = ws_gemm8_bf16(A, lda, B, ldb, C, ldc, M, N, K, workspace, &stats);
  *cycles = stats.hw_e2e_cycles;
  return rc;
}

static int hw_attention_heads(
    const transformer_layer_case_t *tc,
    const fpga_safe_attention_workspace_t *workspace,
    uint64_t *e2e_cycles,
    uint64_t *accel_cycles,
    uint64_t *score_cycles,
    uint64_t *value_cycles,
    uint64_t *raw_hw_rc) {
  *e2e_cycles = 0;
  *accel_cycles = 0;
  *score_cycles = 0;
  *value_cycles = 0;
  *raw_hw_rc = 0;
  for (int h = 0; h < tc->n_heads; h++) {
    const int base = h * tc->head_dim;
    fpga_safe_attention_stats_t stats;
    const int rc = fpga_safe_attention_bf16_hwpack(
        &q_proj[0][base], TRANSFORMER_LAYER_MAX_D_MODEL,
        &k_proj[0][base], TRANSFORMER_LAYER_MAX_D_MODEL,
        &v_proj[0][base], TRANSFORMER_LAYER_MAX_D_MODEL,
        tc->seq_len, tc->seq_len, tc->head_dim, tc->head_dim,
        tc->scale_bf16,
        &context[0][base], TRANSFORMER_LAYER_MAX_D_MODEL,
        workspace,
        &stats);
    *raw_hw_rc = stats.raw_hw_rc;
    *accel_cycles += stats.hw_e2e_cycles;
    *score_cycles += stats.score_cycles;
    *value_cycles += stats.value_cycles;
    *e2e_cycles += stats.q_pack_cycles + stats.k_pack_cycles +
                   stats.v_pack_cycles + stats.hw_e2e_cycles + stats.copy_out_cycles;
    if (rc != FPGA_SAFE_ATTN_OK) {
      return rc;
    }
  }
  return FPGA_SAFE_ATTN_OK;
}

static float max_diff_vs(const uint16_t *expected, const uint16_t *actual, int rows, int cols, int ldactual, int *mismatches, uint32_t tolerance_x100000, const char *name) {
  float max_abs_diff = 0.0f;
  *mismatches = 0;
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      const float ref = bf16_to_float(tensor_at(expected, r, c, cols));
      const float got = bf16_to_float(tensor_at(actual, r, c, ldactual));
      const float diff = fabsf(got - ref);
      if (diff > max_abs_diff) {
        max_abs_diff = diff;
      }
      if ((uint32_t)(diff * 100000.0f) > tolerance_x100000) {
        if (*mismatches < 8) {
          printf("Mismatch case=%s row=%d col=%d ref=", name, r, c);
          print_float_inline(ref);
          printf("got=");
          print_float_inline(got);
          printf("diff=");
          print_float_inline(diff);
          printf("\n");
        }
        (*mismatches)++;
      }
    }
  }
  return max_abs_diff;
}

int main(void) {
  const ws_gemm_workspace_t gemm_workspace =
      ws_gemm8_make_workspace(gemm_a_tiles, gemm_b_tiles, gemm_c_words,
                              TRANSFORMER_LAYER_MAX_SEQ_LEN,
                              TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
                              TRANSFORMER_LAYER_MAX_HIDDEN_DIM);
  const fpga_safe_attention_workspace_t attn_workspace =
      fpga_safe_attention_make_workspace(q_tiles, k_tiles, v_tiles, attn_out_words,
                                         TRANSFORMER_LAYER_MAX_SEQ_LEN,
                                         TRANSFORMER_LAYER_MAX_SEQ_LEN,
                                         TRANSFORMER_LAYER_MAX_HEAD_DIM,
                                         TRANSFORMER_LAYER_MAX_HEAD_DIM);

  printf("=== Dual-RoCC Full Transformer Layer Test ===\n");
  printf("OPCODE_INFO,matmul=%d,attention=%d\n", SA_MATMUL_OPCODE, SA_ATTN_OPCODE);
  printf("CSV_HEADER,case,name,seq_len,d_model,n_heads,head_dim,hidden_dim,cpu_cycles,hw_e2e_cycles,ln_cycles,q_proj_cycles,k_proj_cycles,v_proj_cycles,attn_e2e_cycles,attn_accel_cycles,attn_score_cycles,attn_value_cycles,out_proj_cycles,mlp_fc1_cycles,gelu_cycles,mlp_fc2_cycles,hw_rc,raw_hw_rc,speedup_x100,hw_max_abs_diff_x100000,cpu_ref_max_abs_diff_x100000,mismatches\n");

  int total_mismatches = 0;
  for (int i = 0; i < transformer_layer_case_count; i++) {
    const transformer_layer_case_t *tc = &transformer_layer_cases[i];
    memset(hw_output, 0, sizeof(hw_output));

    const uint64_t cpu_start = ws_read_cycles();
    sw_transformer_layer(tc);
    const uint64_t cpu_cycles = ws_read_cycles() - cpu_start;

    int cpu_mismatches = 0;
    const float cpu_ref_diff = max_diff_vs(tc->expected, &sw_output[0][0],
                                           tc->seq_len, tc->d_model,
                                           TRANSFORMER_LAYER_MAX_D_MODEL,
                                           &cpu_mismatches, tc->tolerance_x100000, tc->name);

    uint64_t ln_cycles = 0;
    uint64_t q_cycles = 0;
    uint64_t k_cycles = 0;
    uint64_t v_cycles = 0;
    uint64_t out_cycles = 0;
    uint64_t fc1_cycles = 0;
    uint64_t gelu_cycles = 0;
    uint64_t fc2_cycles = 0;
    uint64_t attn_e2e = 0;
    uint64_t attn_accel = 0;
    uint64_t attn_score = 0;
    uint64_t attn_value = 0;
    uint64_t raw_hw_rc = 0;

    uint64_t stage_start = ws_read_cycles();
    layernorm_bf16(tc->x, tc->d_model, tc->ln1_gamma, tc->ln1_beta,
                   &ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
    ln_cycles += ws_read_cycles() - stage_start;

    int hw_rc = hw_gemm(&ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->wq, tc->d_model,
                        &q_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                        tc->seq_len, tc->d_model, tc->d_model, &gemm_workspace, &q_cycles);
    if (hw_rc == WS_GEMM_OK) {
      hw_rc = hw_gemm(&ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->wk, tc->d_model,
                      &k_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      tc->seq_len, tc->d_model, tc->d_model, &gemm_workspace, &k_cycles);
    }
    if (hw_rc == WS_GEMM_OK) {
      hw_rc = hw_gemm(&ln1_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->wv, tc->d_model,
                      &v_proj[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      tc->seq_len, tc->d_model, tc->d_model, &gemm_workspace, &v_cycles);
    }
    if (hw_rc == WS_GEMM_OK) {
      hw_rc = hw_attention_heads(tc, &attn_workspace, &attn_e2e, &attn_accel,
                                 &attn_score, &attn_value, &raw_hw_rc);
    }
    if (hw_rc == FPGA_SAFE_ATTN_OK || hw_rc == WS_GEMM_OK) {
      hw_rc = hw_gemm(&context[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->wo, tc->d_model,
                      &attn_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      tc->seq_len, tc->d_model, tc->d_model, &gemm_workspace, &out_cycles);
    }

    stage_start = ws_read_cycles();
    residual_add_bf16(tc->x, tc->d_model, &attn_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      &res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
    layernorm_bf16(&res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->ln2_gamma, tc->ln2_beta,
                   &ln2_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
    ln_cycles += ws_read_cycles() - stage_start;

    if (hw_rc == WS_GEMM_OK) {
      hw_rc = hw_gemm(&ln2_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->w1, tc->hidden_dim,
                      &mlp_hidden[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
                      tc->seq_len, tc->hidden_dim, tc->d_model, &gemm_workspace, &fc1_cycles);
    }

    stage_start = ws_read_cycles();
    gelu_bf16(&mlp_hidden[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM,
              &mlp_act[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM, tc->seq_len, tc->hidden_dim);
    gelu_cycles = ws_read_cycles() - stage_start;

    if (hw_rc == WS_GEMM_OK) {
      hw_rc = hw_gemm(&mlp_act[0][0], TRANSFORMER_LAYER_MAX_HIDDEN_DIM, tc->w2, tc->d_model,
                      &mlp_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      tc->seq_len, tc->d_model, tc->hidden_dim, &gemm_workspace, &fc2_cycles);
    }

    stage_start = ws_read_cycles();
    residual_add_bf16(&res1[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      &mlp_out[0][0], TRANSFORMER_LAYER_MAX_D_MODEL,
                      &hw_output[0][0], TRANSFORMER_LAYER_MAX_D_MODEL, tc->seq_len, tc->d_model);
    ln_cycles += ws_read_cycles() - stage_start;

    const uint64_t hw_e2e_cycles = ln_cycles + q_cycles + k_cycles + v_cycles +
                                   attn_e2e + out_cycles + fc1_cycles +
                                   gelu_cycles + fc2_cycles;
    const uint64_t speedup_x100 =
        hw_e2e_cycles == 0 ? 0 : (cpu_cycles * 100u) / hw_e2e_cycles;

    int mismatches = 1;
    float hw_diff = 0.0f;
    if (hw_rc == WS_GEMM_OK) {
      hw_diff = max_diff_vs(tc->expected, &hw_output[0][0], tc->seq_len, tc->d_model,
                            TRANSFORMER_LAYER_MAX_D_MODEL, &mismatches,
                            tc->tolerance_x100000, tc->name);
    }
    total_mismatches += mismatches;

    printf("CSV_DATA,%d,%s,%d,%d,%d,%d,%d,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%d,%lu,%lu,%lu,%lu,%d\n",
           i, tc->name, tc->seq_len, tc->d_model, tc->n_heads, tc->head_dim, tc->hidden_dim,
           (unsigned long)cpu_cycles,
           (unsigned long)hw_e2e_cycles,
           (unsigned long)ln_cycles,
           (unsigned long)q_cycles,
           (unsigned long)k_cycles,
           (unsigned long)v_cycles,
           (unsigned long)attn_e2e,
           (unsigned long)attn_accel,
           (unsigned long)attn_score,
           (unsigned long)attn_value,
           (unsigned long)out_cycles,
           (unsigned long)fc1_cycles,
           (unsigned long)gelu_cycles,
           (unsigned long)fc2_cycles,
           hw_rc,
           (unsigned long)raw_hw_rc,
           (unsigned long)speedup_x100,
           (unsigned long)(hw_diff * 100000.0f),
           (unsigned long)(cpu_ref_diff * 100000.0f),
           mismatches);
  }

  if (total_mismatches == 0) {
    printf("PASS: dual-RoCC full transformer layer matched PyTorch tolerance.\n");
  } else {
    printf("FAIL: total transformer layer mismatches = %d\n", total_mismatches);
  }
  return total_mismatches == 0 ? 0 : 1;
}

#include "generated/transformer_layer_cases.c"
