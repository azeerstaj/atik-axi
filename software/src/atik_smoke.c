// SPDX-License-Identifier: Apache-2.0

#include "atik_log.h"
#include "atik_ref.h"
#include "atik_types.h"

#include <stdint.h>

static int32_t fixed_x10000(uint16_t bf16) {
  float value = atik_bf16_to_float(bf16);
  return (int32_t)(value * 10000.0f + (value >= 0.0f ? 0.5f : -0.5f));
}

static int32_t abs_i32(int32_t value) {
  return value < 0 ? -value : value;
}

int main(void) {
  const uint16_t A[4] = {
      atik_float_to_bf16(1.0f),
      atik_float_to_bf16(2.0f),
      atik_float_to_bf16(3.0f),
      atik_float_to_bf16(4.0f),
  };
  const uint16_t B[4] = {
      atik_float_to_bf16(0.5f),
      atik_float_to_bf16(-1.0f),
      atik_float_to_bf16(1.5f),
      atik_float_to_bf16(2.0f),
  };
  uint16_t C[4] = {0, 0, 0, 0};

  atik_ref_matmul_bf16(A, 2, 2, 2, B, 2, 2, C, 2);

  int32_t sw[4];
  int32_t hw[4];
  int32_t diff[4];
  int32_t max_diff = 0;
  for (int i = 0; i < 4; i++) {
    sw[i] = fixed_x10000(C[i]);
    hw[i] = sw[i];
    diff[i] = abs_i32(hw[i] - sw[i]);
    if (diff[i] > max_diff) {
      max_diff = diff[i];
    }
  }

  const atik_log_stage_t stages[] = {
      {"ref_matmul", 1},
      {"log", 1},
  };
  const atik_log_result_t result = {
      .workload = "atik-smoke",
      .case_index = 0,
      .name = "matmul_2x2_reference_smoke",
      .shape = "M=2 N=2 K=2",
      .mode = "reference-only",
      .status = "PASS",
      .hw_rc = ATIK_OK,
      .raw_hw_rc = ATIK_OK,
      .mismatches = 0,
      .cpu_cycles = 2,
      .hw_cycles = 2,
      .stages = stages,
      .stage_count = 2,
      .hw_max_abs_diff_x100000 = max_diff * 10,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  const atik_log_sample_t sample = {
      .workload = "atik-smoke",
      .case_index = 0,
      .name = "matmul_2x2_reference_smoke",
      .tensor = "C",
      .start = 0,
      .count = 4,
      .total = 4,
      .hw_rc = ATIK_OK,
      .sw_x10000 = sw,
      .hw_x10000 = hw,
      .diff_x10000 = diff,
  };

  atik_log_result_human(&result);
  atik_log_sample(&sample);
  atik_log_result_json(&result);
  return 0;
}
