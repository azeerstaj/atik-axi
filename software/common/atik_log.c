#include "atik_log.h"

#include <inttypes.h>
#include <stdio.h>

static uint64_t speedup_x100(uint64_t cpu_cycles, uint64_t hw_cycles) {
  if (hw_cycles == 0) {
    return 0;
  }
  return (cpu_cycles * 100ull + hw_cycles / 2ull) / hw_cycles;
}

static void print_fixed(int32_t value, int scale, int digits) {
  if (value < 0) {
    putchar('-');
    value = -value;
  }
  printf("%" PRId32 ".", value / scale);
  int32_t frac = value % scale;
  int divisor = scale / 10;
  for (int i = 0; i < digits; i++) {
    putchar((char)('0' + (frac / divisor) % 10));
    divisor /= 10;
  }
}

void atik_log_fixed_x10000(int32_t value) {
  print_fixed(value, 10000, 4);
}

void atik_log_fixed_x100000(int32_t value) {
  print_fixed(value, 100000, 5);
}

void atik_log_result_human(const atik_log_result_t *result) {
  uint64_t spx100 = speedup_x100(result->cpu_cycles, result->hw_cycles);
  printf("[Case %d] %s\n", result->case_index, result->name);
  printf("  shape : %s\n", result->shape != 0 ? result->shape : "");
  printf("  mode  : %s\n", result->mode != 0 ? result->mode : "atik");
  printf("  status: %s  hw_rc=%" PRIu64 " raw_hw_rc=%" PRIu64 " mismatches=%" PRIu64 "\n",
         result->status, result->hw_rc, result->raw_hw_rc, result->mismatches);
  printf("  cycles: cpu=%" PRIu64 " hw=%" PRIu64 " speedup=%" PRIu64 ".%02" PRIu64 "x\n",
         result->cpu_cycles, result->hw_cycles, (uint64_t)(spx100 / 100ull), (uint64_t)(spx100 % 100ull));
  if (result->stages != 0 && result->stage_count > 0) {
    printf("         ");
    for (int i = 0; i < result->stage_count; i++) {
      printf("%s=%" PRIu64, result->stages[i].name, result->stages[i].cycles);
      if (i + 1 < result->stage_count) {
        putchar(' ');
      }
    }
    putchar('\n');
  }
  printf("  error : hw_max_abs=");
  atik_log_fixed_x100000(result->hw_max_abs_diff_x100000);
  printf(" cpu_ref_max_abs=");
  atik_log_fixed_x100000(result->cpu_ref_max_abs_diff_x100000);
  printf("\n\n");
}

void atik_log_result_json(const atik_log_result_t *result) {
  uint64_t spx100 = speedup_x100(result->cpu_cycles, result->hw_cycles);
  printf("RESULT_JSON {\"workload\":\"%s\",\"case\":%d,\"name\":\"%s\","
         "\"status\":\"%s\",\"hw_rc\":%" PRIu64 ",\"raw_hw_rc\":%" PRIu64 ","
         "\"mismatches\":%" PRIu64 ",\"cpu_cycles\":%" PRIu64 ",\"hw_cycles\":%" PRIu64 ","
         "\"speedup_x100\":%" PRIu64 ",\"hw_max_abs_diff_x100000\":%" PRId32 ","
         "\"cpu_ref_max_abs_diff_x100000\":%" PRId32 "}\n",
         result->workload, result->case_index, result->name, result->status,
         result->hw_rc, result->raw_hw_rc, result->mismatches,
         result->cpu_cycles, result->hw_cycles, spx100,
         result->hw_max_abs_diff_x100000, result->cpu_ref_max_abs_diff_x100000);
}

void atik_log_result(const atik_log_result_t *result) {
  atik_log_result_human(result);
  atik_log_result_json(result);
}

static void print_fixed_array_json(const int32_t *values, int count) {
  putchar('[');
  for (int i = 0; i < count; i++) {
    if (i != 0) {
      putchar(',');
    }
    atik_log_fixed_x10000(values[i]);
  }
  putchar(']');
}

static void print_fixed_array_human(const char *label, const int32_t *values, int count) {
  printf("    %s:", label);
  for (int i = 0; i < count; i++) {
    putchar(' ');
    atik_log_fixed_x10000(values[i]);
  }
  putchar('\n');
}

void atik_log_sample(const atik_log_sample_t *sample) {
  printf("  sample %s[start=%d count=%d total=%d]\n",
         sample->tensor, sample->start, sample->count, sample->total);
  print_fixed_array_human("sw ", sample->sw_x10000, sample->count);
  print_fixed_array_human("hw ", sample->hw_x10000, sample->count);
  print_fixed_array_human("diff", sample->diff_x10000, sample->count);

  printf("SAMPLE_JSON {\"workload\":\"%s\",\"case\":%d,\"name\":\"%s\","
         "\"tensor\":\"%s\",\"start\":%d,\"count\":%d,\"total\":%d,\"hw_rc\":%" PRIu64 ",\"sw\":",
         sample->workload, sample->case_index, sample->name, sample->tensor,
         sample->start, sample->count, sample->total, sample->hw_rc);
  print_fixed_array_json(sample->sw_x10000, sample->count);
  printf(",\"hw\":");
  print_fixed_array_json(sample->hw_x10000, sample->count);
  printf(",\"diff\":");
  print_fixed_array_json(sample->diff_x10000, sample->count);
  printf("}\n");
}
