#ifndef ATIK_BENCH_H
#define ATIK_BENCH_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  const char *name;
  int m;
  int n;
  int k;
  int lda;
  int ldb;
  int ldc;
  uint32_t seed;
  float min_value;
  float max_value;
  int tolerance_x10000;
} atik_matmul_case_t;

uint64_t atik_bench_read_cycles(void);

void atik_bench_fill_bf16(
    uint16_t *dst,
    int rows,
    int cols,
    int ld,
    uint32_t *seed,
    float min_value,
    float max_value);

void atik_bench_zero_bf16(uint16_t *dst, int rows, int cols, int ld);

int32_t atik_bench_bf16_x10000(uint16_t bf16);

int atik_bench_compare_bf16(
    const uint16_t *sw,
    const uint16_t *hw,
    int rows,
    int cols,
    int ld_sw,
    int ld_hw,
    int tolerance_x10000,
    int32_t *max_diff_x10000);

void atik_bench_sample_bf16(
    const uint16_t *sw,
    const uint16_t *hw,
    int rows,
    int cols,
    int ld_sw,
    int ld_hw,
    int start,
    int count,
    int32_t *sw_x10000,
    int32_t *hw_x10000,
    int32_t *diff_x10000);

#ifdef __cplusplus
}
#endif

#endif
