#ifndef ATIK_LOG_H
#define ATIK_LOG_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
  const char *name;
  uint64_t cycles;
} atik_log_stage_t;

typedef struct {
  const char *workload;
  int case_index;
  const char *name;
  const char *shape;
  const char *mode;
  const char *status;
  uint64_t hw_rc;
  uint64_t raw_hw_rc;
  uint64_t mismatches;
  uint64_t cpu_cycles;
  uint64_t hw_cycles;
  const atik_log_stage_t *stages;
  int stage_count;
  int32_t hw_max_abs_diff_x100000;
  int32_t cpu_ref_max_abs_diff_x100000;
} atik_log_result_t;

typedef struct {
  const char *workload;
  int case_index;
  const char *name;
  const char *tensor;
  int start;
  int count;
  int total;
  uint64_t hw_rc;
  const int32_t *sw_x10000;
  const int32_t *hw_x10000;
  const int32_t *diff_x10000;
} atik_log_sample_t;

void atik_log_result_human(const atik_log_result_t *result);
void atik_log_result_json(const atik_log_result_t *result);
void atik_log_result(const atik_log_result_t *result);
void atik_log_sample(const atik_log_sample_t *sample);
void atik_log_fixed_x10000(int32_t value);
void atik_log_fixed_x100000(int32_t value);

#ifdef __cplusplus
}
#endif

#endif
