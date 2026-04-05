#include "ws_gemm.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX_M 16
#define MAX_N 16
#define MAX_K 100

typedef struct {
  int M;
  int N;
  int K;
} gemm_case_t;

static void sw_gemm_u16(
    const uint16_t A[MAX_M][MAX_K],
    const uint16_t B[MAX_K][MAX_N],
    uint32_t C[MAX_M][MAX_N],
    int M, int N, int K) {
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      uint32_t acc = 0;
      for (int k = 0; k < K; k++) {
        acc += (uint32_t)A[i][k] * (uint32_t)B[k][j];
      }
      C[i][j] = acc;
    }
  }
}

int main(void) {
  static uint16_t A[MAX_M][MAX_K] __attribute__((aligned(64)));
  static uint16_t B[MAX_K][MAX_N] __attribute__((aligned(64)));
  static uint32_t C_sw[MAX_M][MAX_N];
  static uint32_t C_hw[MAX_M][MAX_N];
  static uint64_t a_tiles[WS_GEMM_A_TILE_WORDS(MAX_M, MAX_K)] __attribute__((aligned(64)));
  static uint64_t b_tiles[WS_GEMM_B_TILE_WORDS(MAX_N, MAX_K)] __attribute__((aligned(64)));
  static uint64_t c_words[WS_GEMM_C_TILE_WORDS] __attribute__((aligned(64)));

  const ws_gemm_workspace_t workspace =
      ws_gemm_make_workspace(a_tiles, b_tiles, c_words, MAX_M, MAX_N, MAX_K);

  const gemm_case_t tests[] = {
    {4, 4, 100},
    {8, 8, 100},
    {16, 16, 100},
  };
  const int ntests = (int)(sizeof(tests) / sizeof(tests[0]));

  srand(1);
  printf("=== Systolic GEMM Random Test (Weight-Stationary) ===\n");
  printf("CSV_HEADER,case,M,N,K,sw_cycles,hw_e2e_cycles,hw_rc,mismatches\n");
  printf("PERF_HEADER,case,busy_cycles,run_cmds,preload_cmds,preload_reuse_hits,chunks_started,feed_cycles,capture_rows,tl_b_reads,tl_a_reads,tl_c_writes,wait_fill_b_cycles,wait_fill_a_cycles,load_weight_cycles,wait_chunk_out_cycles,wait_put_cycles\n");
  printf("STAGE_HEADER,case,pack_a_cycles,pack_b_cycles,preload_cycles,run_cycles,copy_out_cycles\n");

  int total_mismatches = 0;
  for (int t = 0; t < ntests; t++) {
    const int M = tests[t].M;
    const int N = tests[t].N;
    const int K = tests[t].K;
    ws_gemm_stats_t stats;

    for (int i = 0; i < M; i++) {
      for (int k = 0; k < K; k++) {
        A[i][k] = (uint16_t)(rand() % 16);
      }
    }
    for (int k = 0; k < K; k++) {
      for (int j = 0; j < N; j++) {
        B[k][j] = (uint16_t)(rand() % 16);
      }
    }

    uint64_t sw_start = ws_read_cycles();
    sw_gemm_u16(A, B, C_sw, M, N, K);
    uint64_t sw_cycles = ws_read_cycles() - sw_start;

    int hw_rc = ws_gemm_u16(
        &A[0][0], MAX_K,
        &B[0][0], MAX_N,
        &C_hw[0][0], MAX_N,
        M, N, K,
        &workspace,
        &stats);

    int mismatches = 0;
    for (int i = 0; i < M; i++) {
      for (int j = 0; j < N; j++) {
        if (C_sw[i][j] != C_hw[i][j]) {
          if (mismatches < 8) {
            printf("Mismatch case=%d at (%d,%d): sw=%u hw=%u\n",
                   t, i, j, C_sw[i][j], C_hw[i][j]);
          }
          mismatches++;
        }
      }
    }

    if (hw_rc != WS_GEMM_OK) {
      printf("Hardware return code error on case %d: rc=%d\n", t, hw_rc);
      mismatches += 1;
    }

    total_mismatches += mismatches;
    printf("CSV_DATA,%d,%d,%d,%d,%lu,%lu,%d,%d\n",
           t, M, N, K,
           (unsigned long)sw_cycles,
           (unsigned long)stats.hw_e2e_cycles,
           hw_rc,
           mismatches);
    printf("PERF_DATA,%d,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu,%lu\n",
           t,
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
           t,
           (unsigned long)stats.stage.pack_a_cycles,
           (unsigned long)stats.stage.pack_b_cycles,
           (unsigned long)stats.stage.preload_cycles,
           (unsigned long)stats.stage.run_cycles,
           (unsigned long)stats.stage.copy_out_cycles);
  }

  if (total_mismatches == 0) {
    printf("PASS: all randomized GEMM cases matched.\n");
  } else {
    printf("FAIL: total mismatches = %d\n", total_mismatches);
  }
  return 0;
}
