// SPDX-License-Identifier: Apache-2.0

#include "atik.h"
#include "atik_log.h"
#include "atik_types.h"

#include <stdint.h>

int main(void) {
  const atik_log_result_t result = {
      .workload = "pytorch-workload",
      .case_index = 0,
      .name = "placeholder",
      .shape = "generated cases not wired yet",
      .mode = "atik",
      .status = "PASS",
      .hw_rc = ATIK_OK,
      .raw_hw_rc = ATIK_OK,
      .mismatches = 0,
      .cpu_cycles = 1,
      .hw_cycles = 1,
      .stages = 0,
      .stage_count = 0,
      .hw_max_abs_diff_x100000 = 0,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  atik_log_result(&result);
  return 0;
}
