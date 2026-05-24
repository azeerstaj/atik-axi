#include "atik_bench.h"

#include "atik_ref.h"

#include <stdint.h>

uint64_t atik_bench_read_cycles(void) {
  uint64_t cycles;
  asm volatile("fence; rdcycle %0" : "=r"(cycles) :: "memory");
  return cycles;
}

static uint32_t next_random(uint32_t *seed) {
  uint32_t x = *seed;
  x ^= x << 13;
  x ^= x >> 17;
  x ^= x << 5;
  *seed = x == 0 ? 1u : x;
  return *seed;
}

static int32_t abs_i32(int32_t value) {
  return value < 0 ? -value : value;
}

void atik_bench_fill_bf16(
    uint16_t *dst,
    int rows,
    int cols,
    int ld,
    uint32_t *seed,
    float min_value,
    float max_value) {
  const float scale = (max_value - min_value) / 65535.0f;
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      uint32_t raw = next_random(seed) & 0xffffu;
      float value = min_value + (float)raw * scale;
      dst[r * ld + c] = atik_float_to_bf16(value);
    }
  }
}

void atik_bench_zero_bf16(uint16_t *dst, int rows, int cols, int ld) {
  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      dst[r * ld + c] = 0;
    }
  }
}

int32_t atik_bench_bf16_x10000(uint16_t bf16) {
  float value = atik_bf16_to_float(bf16);
  return (int32_t)(value * 10000.0f + (value >= 0.0f ? 0.5f : -0.5f));
}

int atik_bench_compare_bf16(
    const uint16_t *sw,
    const uint16_t *hw,
    int rows,
    int cols,
    int ld_sw,
    int ld_hw,
    int tolerance_x10000,
    int32_t *max_diff_x10000) {
  int mismatches = 0;
  int32_t max_diff = 0;

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      int32_t sw_value = atik_bench_bf16_x10000(sw[r * ld_sw + c]);
      int32_t hw_value = atik_bench_bf16_x10000(hw[r * ld_hw + c]);
      int32_t diff = abs_i32(hw_value - sw_value);
      if (diff > max_diff) {
        max_diff = diff;
      }
      if (diff > tolerance_x10000) {
        mismatches++;
      }
    }
  }

  if (max_diff_x10000 != 0) {
    *max_diff_x10000 = max_diff;
  }
  return mismatches;
}

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
    int32_t *diff_x10000) {
  const int total = rows * cols;
  for (int i = 0; i < count; i++) {
    int flat_idx = start + i;
    if (flat_idx >= total) {
      sw_x10000[i] = 0;
      hw_x10000[i] = 0;
      diff_x10000[i] = 0;
    } else {
      int row = flat_idx / cols;
      int col = flat_idx - row * cols;
      int sw_idx = row * ld_sw + col;
      int hw_idx = row * ld_hw + col;
      sw_x10000[i] = atik_bench_bf16_x10000(sw[sw_idx]);
      hw_x10000[i] = atik_bench_bf16_x10000(hw[hw_idx]);
      diff_x10000[i] = abs_i32(hw_x10000[i] - sw_x10000[i]);
    }
  }
}
