// SPDX-License-Identifier: Apache-2.0

#include "atik.h"
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
  uint16_t sw_C[4] = {0, 0, 0, 0};
  uint16_t hw_C[4] = {0, 0, 0, 0};

  atik_ref_matmul_bf16(A, 2, 2, 2, B, 2, 2, sw_C, 2);
  int hw_rc = atik_matmul_bf16(A, 2, 2, 2, B, 2, 2, hw_C, 2);

  int32_t sw[4];
  int32_t hw[4];
  int32_t diff[4];
  int32_t max_diff = 0;
  int mismatches = 0;
  for (int i = 0; i < 4; i++) {
    sw[i] = fixed_x10000(sw_C[i]);
    hw[i] = fixed_x10000(hw_C[i]);
    diff[i] = abs_i32(hw[i] - sw[i]);
    if (diff[i] > max_diff) {
      max_diff = diff[i];
    }
    if (diff[i] > 500) {
      mismatches++;
    }
  }

  const char *status = (hw_rc == ATIK_OK && mismatches == 0) ? "PASS" : "FAIL";
  const atik_log_stage_t stages[] = {
      {"ref_matmul", 1},
      {"atik_matmul", atik_read_counter(ATIK_COUNTER_TOTAL_CYCLES)},
  };
  const atik_log_result_t result = {
      .workload = "atik-smoke",
      .case_index = 0,
      .name = "matmul_2x2_hw_smoke",
      .shape = "M=2 N=2 K=2",
      .mode = "matmul",
      .status = status,
      .hw_rc = hw_rc,
      .raw_hw_rc = hw_rc,
      .mismatches = mismatches,
      .cpu_cycles = 2,
      .hw_cycles = atik_read_counter(ATIK_COUNTER_TOTAL_CYCLES),
      .stages = stages,
      .stage_count = 2,
      .hw_max_abs_diff_x100000 = max_diff * 10,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  const atik_log_sample_t sample = {
      .workload = "atik-smoke",
      .case_index = 0,
      .name = "matmul_2x2_hw_smoke",
      .tensor = "C",
      .start = 0,
      .count = 4,
      .total = 4,
      .hw_rc = hw_rc,
      .sw_x10000 = sw,
      .hw_x10000 = hw,
      .diff_x10000 = diff,
  };

  atik_log_result_human(&result);
  atik_log_sample(&sample);
  atik_log_result_json(&result);
  return (hw_rc == ATIK_OK && mismatches == 0) ? 0 : 1;
}
