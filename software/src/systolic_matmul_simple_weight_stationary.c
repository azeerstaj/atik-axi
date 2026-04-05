#include "ws_gemm.h"

#include <stdint.h>
#include <stdio.h>

#define SA_ROWS 4
#define SA_COLS 4

int main(void) {
  enum { K = 140 };

  static uint16_t A[SA_ROWS][K];
  static uint16_t B[K][SA_COLS];
  static uint32_t sw[SA_ROWS][SA_COLS] = {{0}};
  static uint32_t hw[SA_ROWS][SA_COLS] = {{0}};
  static uint64_t a_tiles[WS_GEMM_A_TILE_WORDS(SA_ROWS, K)] __attribute__((aligned(64)));
  static uint64_t b_tiles[WS_GEMM_B_TILE_WORDS(SA_COLS, K)] __attribute__((aligned(64)));
  static uint64_t c_words[WS_GEMM_C_TILE_WORDS] __attribute__((aligned(64)));
  ws_gemm_stats_t stats;

  const ws_gemm_workspace_t workspace =
      ws_gemm_make_workspace(a_tiles, b_tiles, c_words, SA_ROWS, SA_COLS, K);

  for (int i = 0; i < SA_ROWS; i++) {
    for (int k = 0; k < K; k++) {
      A[i][k] = (uint16_t)(((i + 1) * 3 + k) & 0xF);
    }
  }
  for (int k = 0; k < K; k++) {
    for (int j = 0; j < SA_COLS; j++) {
      B[k][j] = (uint16_t)(((j + 1) * 5 + 2 * k) & 0xF);
    }
  }

  uint64_t sw_start = ws_read_cycles();
  for (int i = 0; i < SA_ROWS; i++) {
    for (int j = 0; j < SA_COLS; j++) {
      uint32_t acc = 0;
      for (int k = 0; k < K; k++) {
        acc += (uint32_t)A[i][k] * (uint32_t)B[k][j];
      }
      sw[i][j] = acc;
    }
  }
  uint64_t sw_cycles = ws_read_cycles() - sw_start;

  int gemm_rc = ws_gemm_u16(
      &A[0][0], K,
      &B[0][0], SA_COLS,
      &hw[0][0], SA_COLS,
      SA_ROWS, SA_COLS, K,
      &workspace,
      &stats);

  printf("=== Systolic GEMM Simple Test (Weight-Stationary) ===\n");
  printf("Dims: (%d x %d) * (%d x %d) -> (%d x %d)\n", SA_ROWS, K, K, SA_COLS, SA_ROWS, SA_COLS);
  printf("GEMM rc: %d\n", gemm_rc);
  printf("SW cycles: %lu, HW end-to-end cycles: %lu\n",
         (unsigned long)sw_cycles,
         (unsigned long)stats.hw_e2e_cycles);

  printf("SW C:\n");
  for (int i = 0; i < SA_ROWS; i++) {
    printf("[%u %u %u %u]\n", sw[i][0], sw[i][1], sw[i][2], sw[i][3]);
  }
  printf("HW C:\n");
  for (int i = 0; i < SA_ROWS; i++) {
    printf("[%u %u %u %u]\n", hw[i][0], hw[i][1], hw[i][2], hw[i][3]);
  }
  printf("HW PERF:\n");
  ws_print_perf_counters(stats.perf);

  int mismatches = 0;
  for (int i = 0; i < SA_ROWS; i++) {
    for (int j = 0; j < SA_COLS; j++) {
      if (sw[i][j] != hw[i][j]) {
        mismatches++;
      }
    }
  }

  if (mismatches == 0 && gemm_rc == WS_GEMM_OK) {
    printf("PASS: hardware matches software.\n");
  } else {
    printf("FAIL: mismatches=%d rc=%d\n", mismatches, gemm_rc);
  }
  return 0;
}
