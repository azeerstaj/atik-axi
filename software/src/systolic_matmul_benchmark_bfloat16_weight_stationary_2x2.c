#include "bfloat16_utils.h"
#include "ws_gemm.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define SA_ROWS 2
#define SA_COLS 2
#define MAX_DIM 256
#define CPU_BLOCK 16

typedef struct {
  int M;
  int N;
  int K;
} gemm_case_t;

static volatile float sw_float_checksum_sink;

static float rand_float_bf16_range(void) {
  return ((float)rand() / (float)RAND_MAX) * 4.0f - 2.0f;
}

static void cpu_gemm_blocked_fixed_ref(
    const int16_t A[MAX_DIM][MAX_DIM],
    const int16_t B[MAX_DIM][MAX_DIM],
    int64_t C[MAX_DIM][MAX_DIM],
    int M,
    int N,
    int K) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      C[i][j] = 0;
    }
  }

  for (int ii = 0; ii < M; ii += CPU_BLOCK) {
    int i_end = ii + CPU_BLOCK;
    if (i_end > M) i_end = M;
    for (int kk = 0; kk < K; kk += CPU_BLOCK) {
      int k_end = kk + CPU_BLOCK;
      if (k_end > K) k_end = K;
      for (int jj = 0; jj < N; jj += CPU_BLOCK) {
        int j_end = jj + CPU_BLOCK;
        if (j_end > N) j_end = N;
        for (int i = ii; i < i_end; i++) {
          for (int k = kk; k < k_end; k++) {
            const int32_t a = (int32_t)A[i][k];
            for (int j = jj; j < j_end; j++) {
              C[i][j] += (int64_t)a * (int64_t)B[k][j];
            }
          }
        }
      }
    }
  }
}

static void quantize_fixed_ref_to_bf16(
    const int64_t C_fixed[MAX_DIM][MAX_DIM],
    uint16_t C_bf16[MAX_DIM][MAX_DIM],
    int M,
    int N) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      C_bf16[i][j] = fixed_s64_to_bf16_sat(C_fixed[i][j], WS_GEMM_BF16_ACC_FRAC_BITS);
    }
  }
}

int main(void) {
  static uint16_t A[MAX_DIM][MAX_DIM] __attribute__((aligned(64)));
  static uint16_t B[MAX_DIM][MAX_DIM] __attribute__((aligned(64)));
  static int16_t A_fixed[MAX_DIM][MAX_DIM];
  static int16_t B_fixed[MAX_DIM][MAX_DIM];
  static int64_t C_ref[MAX_DIM][MAX_DIM];
  static uint16_t C_ref_bf16[MAX_DIM][MAX_DIM];
  static uint16_t C_hw[MAX_DIM][MAX_DIM];
  static uint64_t a_tiles[WS_GEMM_A_TILE_WORDS_FOR(SA_ROWS, MAX_DIM, MAX_DIM)] __attribute__((aligned(64)));
  static uint64_t b_tiles[WS_GEMM_B_TILE_WORDS_FOR(SA_COLS, MAX_DIM, MAX_DIM)] __attribute__((aligned(64)));
  static uint64_t c_words[WS_GEMM_C_TILE_WORDS_FOR(SA_ROWS, SA_COLS)] __attribute__((aligned(64)));

  const ws_gemm_workspace_t workspace = ws_gemm_make_workspace_tiled(
      a_tiles, b_tiles, c_words, MAX_DIM, MAX_DIM, MAX_DIM, SA_ROWS, SA_COLS);

  const gemm_case_t cases[] = {
      {128, 128, 128},
      {256, 256, 256},
  };
  const int ncases = (int)(sizeof(cases) / sizeof(cases[0]));

  srand(1);
  printf("=== Systolic GEMM Benchmark (BF16 Weight-Stationary 2x2) ===\n");
  printf("CSV_HEADER,case,M,N,K,sw_cycles,hw_total_cycles,hw_rc,mismatches\n");
  printf("PERF_HEADER,case,busy_cycles,run_cmds,preload_cmds,preload_reuse_hits,chunks_started,feed_cycles,capture_rows,tl_b_reads,tl_a_reads,tl_c_writes,wait_fill_b_cycles,wait_fill_a_cycles,load_weight_cycles,wait_chunk_out_cycles,wait_put_cycles\n");
  printf("STAGE_HEADER,case,pack_a_cycles,pack_b_cycles,preload_cycles,run_cycles,copy_out_cycles\n");

  for (int c = 0; c < ncases; c++) {
    const int M = cases[c].M;
    const int N = cases[c].N;
    const int K = cases[c].K;
    ws_gemm_stats_t stats;

    for (int i = 0; i < M; i++) {
      for (int k = 0; k < K; k++) {
        A[i][k] = float_to_bf16(rand_float_bf16_range());
        A_fixed[i][k] = bf16_to_fixed_s16_sat(A[i][k], WS_GEMM_BF16_FIXED_FRAC_BITS);
      }
    }
    for (int k = 0; k < K; k++) {
      for (int j = 0; j < N; j++) {
        B[k][j] = float_to_bf16(rand_float_bf16_range());
        B_fixed[k][j] = bf16_to_fixed_s16_sat(B[k][j], WS_GEMM_BF16_FIXED_FRAC_BITS);
      }
    }

    uint64_t sw_start = ws_read_cycles();
    cpu_gemm_blocked_fixed_ref(A_fixed, B_fixed, C_ref, M, N, K);
    quantize_fixed_ref_to_bf16(C_ref, C_ref_bf16, M, N);
    uint64_t sw_cycles = ws_read_cycles() - sw_start;
    float sw_checksum = 0.0f;
    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        sw_checksum += bf16_to_float(C_ref_bf16[i][j]);
      }
    }
    sw_float_checksum_sink = sw_checksum;

    const int hw_rc = ws_gemm_bf16(
        &A[0][0], MAX_DIM,
        &B[0][0], MAX_DIM,
        &C_hw[0][0], MAX_DIM,
        M, N, K,
        &workspace,
        &stats);

    int mismatches = 0;
    if (hw_rc == WS_GEMM_OK) {
      for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
          if (C_ref_bf16[i][j] != C_hw[i][j]) {
            if (mismatches < 8) {
              const float sw_val = bf16_to_float(C_ref_bf16[i][j]);
              const float hw_val = bf16_to_float(C_hw[i][j]);
              printf("Mismatch case=%d at (%d,%d): sw_bf16=0x%04x hw_bf16=0x%04x sw=",
                     c, i, j,
                     (unsigned)C_ref_bf16[i][j],
                     (unsigned)C_hw[i][j]);
              print_float_inline(sw_val);
              printf("hw=");
              print_float_inline(hw_val);
              printf("\n");
            }
            mismatches++;
          }
        }
      }
    } else {
      mismatches = -1;
    }

    printf("CSV_DATA,%d,%d,%d,%d,%lu,%lu,%d,%d\n",
           c, M, N, K,
           (unsigned long)sw_cycles,
           (unsigned long)stats.hw_e2e_cycles,
           hw_rc,
           mismatches);
    printf("PERF_DATA,%d,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu\n",
           c,
           (unsigned long)stats.perf[WS_PERF_BUSY_CYCLES],
           (unsigned long)stats.perf[WS_PERF_RUN_CMDS],
           (unsigned long)stats.perf[WS_PERF_PRELOAD_CMDS],
           (unsigned long)stats.perf[WS_PERF_PRELOAD_REUSE_HITS],
           (unsigned long)stats.perf[WS_PERF_CHUNKS_STARTED],
           (unsigned long)stats.perf[WS_PERF_FEED_CYCLES],
           (unsigned long)stats.perf[WS_PERF_CAPTURE_ROWS],
           (unsigned long)stats.perf[WS_PERF_TL_B_READS],
           (unsigned long)stats.perf[WS_PERF_TL_A_READS],
           (unsigned long)stats.perf[WS_PERF_TL_C_WRITES],
           (unsigned long)stats.perf[WS_PERF_WAIT_FILL_B_CYCLES],
           (unsigned long)stats.perf[WS_PERF_WAIT_FILL_A_CYCLES],
           (unsigned long)stats.perf[WS_PERF_LOAD_WEIGHT_CYCLES],
           (unsigned long)stats.perf[WS_PERF_WAIT_CHUNK_OUT_CYCLES],
           (unsigned long)stats.perf[WS_PERF_WAIT_PUT_CYCLES]);
    printf("STAGE_DATA,%d,%lu,%lu,%lu,%lu,%lu\n",
           c,
           (unsigned long)stats.stage.pack_a_cycles,
           (unsigned long)stats.stage.pack_b_cycles,
           (unsigned long)stats.stage.preload_cycles,
           (unsigned long)stats.stage.run_cycles,
           (unsigned long)stats.stage.copy_out_cycles);
  }

  return 0;
}
