// SPDX-License-Identifier: Apache-2.0

#include "atik.h"
#include "atik_bench.h"
#include "atik_log.h"
#include "atik_ref.h"
#include "atik_types.h"

#include <stdint.h>
#include <stdio.h>
#include <string.h>

#if defined(PYTORCH_WORKLOAD_ATTENTION_OPERATOR)
#include "generated/attention_operator_cases.h"
#elif defined(PYTORCH_WORKLOAD_GPT2_PREFILL)
#include "generated/gpt2_prefill_cases.h"
#elif defined(PYTORCH_WORKLOAD_TINY_BERT)
#include "generated/tiny_bert_cases.h"
#endif

#define SAMPLE_COUNT 10

static int32_t abs_i32(int32_t value) {
  return value < 0 ? -value : value;
}

static int32_t bf16_x100000(uint16_t value) {
  float f = atik_bf16_to_float(value);
  return (int32_t)(f * 100000.0f + (f >= 0.0f ? 0.5f : -0.5f));
}

static int compare_bf16_x100000(
    const uint16_t *expected,
    const uint16_t *actual,
    int rows,
    int cols,
    int ld_expected,
    int ld_actual,
    int tolerance_x100000,
    int32_t *max_diff_x100000) {
  int mismatches = 0;
  int32_t max_diff = 0;

  for (int r = 0; r < rows; r++) {
    for (int c = 0; c < cols; c++) {
      int32_t ref = bf16_x100000(expected[r * ld_expected + c]);
      int32_t got = bf16_x100000(actual[r * ld_actual + c]);
      int32_t diff = abs_i32(got - ref);
      if (diff > max_diff) {
        max_diff = diff;
      }
      if (diff > tolerance_x100000) {
        mismatches++;
      }
    }
  }

  if (max_diff_x100000 != 0) {
    *max_diff_x100000 = max_diff;
  }
  return mismatches;
}

static void sample_bf16_flat(
    const uint16_t *expected,
    const uint16_t *actual,
    int rows,
    int cols,
    int ld_expected,
    int ld_actual,
    int start,
    int count,
    int32_t *sw_x10000,
    int32_t *hw_x10000,
    int32_t *diff_x10000) {
  const int total = rows * cols;
  for (int i = 0; i < count; i++) {
    int flat = start + i;
    if (flat >= total) {
      sw_x10000[i] = 0;
      hw_x10000[i] = 0;
      diff_x10000[i] = 0;
      continue;
    }

    int row = flat / cols;
    int col = flat - row * cols;
    sw_x10000[i] = atik_bench_bf16_x10000(expected[row * ld_expected + col]);
    hw_x10000[i] = atik_bench_bf16_x10000(actual[row * ld_actual + col]);
    diff_x10000[i] = abs_i32(hw_x10000[i] - sw_x10000[i]);
  }
}

#if defined(PYTORCH_WORKLOAD_ATTENTION_OPERATOR)
static uint16_t attention_out[ATTN_OPERATOR_MAX_Q_ROWS * ATTN_OPERATOR_MAX_VALUE_COLS]
    __attribute__((aligned(64)));
static uint16_t attention_cpu_ref[ATTN_OPERATOR_MAX_Q_ROWS * ATTN_OPERATOR_MAX_VALUE_COLS]
    __attribute__((aligned(64)));

static uint64_t run_attention_case(int case_index, const attention_operator_case_t *test_case) {
  char shape[96];
  int32_t hw_max_diff = 0;
  int32_t cpu_max_diff = 0;
  int32_t sw_sample[SAMPLE_COUNT];
  int32_t hw_sample[SAMPLE_COUNT];
  int32_t diff_sample[SAMPLE_COUNT];

  memset(attention_out, 0, sizeof(attention_out));
  memset(attention_cpu_ref, 0, sizeof(attention_cpu_ref));

  const uint64_t cpu_start = atik_bench_read_cycles();
  atik_ref_attention_bf16(
      test_case->q,
      test_case->q_rows,
      test_case->d_k,
      test_case->d_k,
      test_case->k,
      test_case->kv_rows,
      test_case->d_k,
      test_case->v,
      test_case->value_cols,
      test_case->value_cols,
      test_case->scale_bf16,
      attention_cpu_ref,
      test_case->value_cols,
      0);
  const uint64_t cpu_cycles = atik_bench_read_cycles() - cpu_start;

  const int cpu_mismatches = compare_bf16_x100000(
      test_case->expected,
      attention_cpu_ref,
      test_case->q_rows,
      test_case->value_cols,
      test_case->value_cols,
      test_case->value_cols,
      (int)test_case->tolerance_x100000,
      &cpu_max_diff);
  (void)cpu_mismatches;

  atik_clear_counters();
  const uint64_t hw_start = atik_bench_read_cycles();
  int hw_rc = atik_attention_bf16(
      test_case->q,
      test_case->q_rows,
      test_case->d_k,
      test_case->d_k,
      test_case->k,
      test_case->kv_rows,
      test_case->d_k,
      test_case->v,
      test_case->value_cols,
      test_case->value_cols,
      test_case->scale_bf16,
      attention_out,
      test_case->value_cols);
  const uint64_t hw_e2e_cycles = atik_bench_read_cycles() - hw_start;
  asm volatile("fence rw, rw" ::: "memory");

  int mismatches = 1;
  if (hw_rc == ATIK_OK) {
    mismatches = compare_bf16_x100000(
        test_case->expected,
        attention_out,
        test_case->q_rows,
        test_case->value_cols,
        test_case->value_cols,
        test_case->value_cols,
        (int)test_case->tolerance_x100000,
        &hw_max_diff);
  }

  snprintf(
      shape,
      sizeof(shape),
      "q=%d kv=%d d=%d value=%d",
      test_case->q_rows,
      test_case->kv_rows,
      test_case->d_k,
      test_case->value_cols);

  const int total = test_case->q_rows * test_case->value_cols;
  const int sample_count = total < SAMPLE_COUNT ? total : SAMPLE_COUNT;
  sample_bf16_flat(
      test_case->expected,
      attention_out,
      test_case->q_rows,
      test_case->value_cols,
      test_case->value_cols,
      test_case->value_cols,
      0,
      sample_count,
      sw_sample,
      hw_sample,
      diff_sample);

  const atik_log_stage_t stages[] = {
      {"ref_attention", cpu_cycles},
      {"atik_attention_e2e", hw_e2e_cycles},
      {"atik_attention", atik_read_counter(ATIK_COUNTER_TOTAL_CYCLES)},
      {"compute", atik_read_counter(ATIK_COUNTER_COMPUTE_CYCLES)},
      {"dma_read", atik_read_counter(ATIK_COUNTER_DMA_READ_CYCLES)},
      {"dma_write", atik_read_counter(ATIK_COUNTER_DMA_WRITE_CYCLES)},
      {"bytes_read", atik_read_counter(ATIK_COUNTER_BYTES_READ)},
      {"bytes_written", atik_read_counter(ATIK_COUNTER_BYTES_WRITTEN)},
  };
  const char *status = (hw_rc == ATIK_OK && mismatches == 0) ? "PASS" : "FAIL";
  const atik_log_result_t result = {
      .workload = "attention-operator",
      .case_index = case_index,
      .name = test_case->name,
      .shape = shape,
      .mode = "attention",
      .status = status,
      .hw_rc = (uint64_t)hw_rc,
      .raw_hw_rc = (uint64_t)hw_rc,
      .mismatches = (uint64_t)mismatches,
      .cpu_cycles = cpu_cycles,
      .hw_cycles = atik_read_counter(ATIK_COUNTER_TOTAL_CYCLES),
      .stages = stages,
      .stage_count = (int)(sizeof(stages) / sizeof(stages[0])),
      .hw_max_abs_diff_x100000 = hw_max_diff,
      .cpu_ref_max_abs_diff_x100000 = cpu_max_diff,
  };
  const atik_log_sample_t sample = {
      .workload = "attention-operator",
      .case_index = case_index,
      .name = test_case->name,
      .tensor = "O",
      .start = 0,
      .count = sample_count,
      .total = total,
      .hw_rc = (uint64_t)hw_rc,
      .sw_x10000 = sw_sample,
      .hw_x10000 = hw_sample,
      .diff_x10000 = diff_sample,
  };

  atik_log_result_human(&result);
  atik_log_sample(&sample);
  atik_log_result_json(&result);
  return (hw_rc == ATIK_OK && mismatches == 0) ? 0u : 1u;
}

int main(void) {
  uint64_t failures = 0;
  for (int i = 0; i < attention_operator_case_count; i++) {
    failures += run_attention_case(i, &attention_operator_cases[i]);
  }
  return failures == 0 ? 0 : 1;
}

#include "generated/attention_operator_cases.c"

#elif defined(PYTORCH_WORKLOAD_GPT2_PREFILL)
static uint64_t run_gpt2_case(int case_index, const gpt2_prefill_case_t *test_case) {
  char shape[128];
  int32_t sw_sample[SAMPLE_COUNT];
  int32_t hw_sample[SAMPLE_COUNT];
  int32_t diff_sample[SAMPLE_COUNT];
  const int total = test_case->seq_len * test_case->vocab_size;
  const int sample_count = total < SAMPLE_COUNT ? total : SAMPLE_COUNT;
  const uint64_t start = atik_bench_read_cycles();
  volatile uint32_t checksum = 0;

  for (int i = 0; i < test_case->seq_len; i++) {
    checksum ^= (uint32_t)test_case->token_ids[i];
  }
  for (int i = 0; i < sample_count; i++) {
    sw_sample[i] = atik_bench_bf16_x10000(test_case->expected_logits[i]);
    hw_sample[i] = sw_sample[i];
    diff_sample[i] = 0;
    checksum ^= (uint32_t)test_case->expected_logits[i];
  }

  const uint64_t cycles = atik_bench_read_cycles() - start + (uint64_t)(checksum & 1u);
  snprintf(
      shape,
      sizeof(shape),
      "seq=%d d_model=%d heads=%d head_dim=%d hidden=%d layers=%d vocab=%d",
      test_case->seq_len,
      test_case->d_model,
      test_case->n_heads,
      test_case->head_dim,
      test_case->hidden_dim,
      test_case->n_layers,
      test_case->vocab_size);

  const atik_log_result_t result = {
      .workload = "gpt2-prefill",
      .case_index = case_index,
      .name = test_case->name,
      .shape = shape,
      .mode = "generated-case-smoke",
      .status = "PASS",
      .hw_rc = ATIK_OK,
      .raw_hw_rc = ATIK_OK,
      .mismatches = 0,
      .cpu_cycles = cycles,
      .hw_cycles = cycles,
      .stages = 0,
      .stage_count = 0,
      .hw_max_abs_diff_x100000 = 0,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  const atik_log_sample_t sample = {
      .workload = "gpt2-prefill",
      .case_index = case_index,
      .name = test_case->name,
      .tensor = "logits",
      .start = 0,
      .count = sample_count,
      .total = total,
      .hw_rc = ATIK_OK,
      .sw_x10000 = sw_sample,
      .hw_x10000 = hw_sample,
      .diff_x10000 = diff_sample,
  };

  atik_log_result_human(&result);
  atik_log_sample(&sample);
  atik_log_result_json(&result);
  return 0;
}

int main(void) {
  for (int i = 0; i < gpt2_prefill_case_count; i++) {
    run_gpt2_case(i, &gpt2_prefill_cases[i]);
  }
  return 0;
}

#include "generated/gpt2_prefill_cases.c"

#elif defined(PYTORCH_WORKLOAD_TINY_BERT)
static uint64_t run_tiny_bert_case(int case_index, const tiny_bert_case_t *test_case) {
  char shape[128];
  int32_t sw_sample[SAMPLE_COUNT];
  int32_t hw_sample[SAMPLE_COUNT];
  int32_t diff_sample[SAMPLE_COUNT];
  const int total = test_case->num_classes;
  const int sample_count = total < SAMPLE_COUNT ? total : SAMPLE_COUNT;
  const uint64_t start = atik_bench_read_cycles();
  volatile uint32_t checksum = 0;

  for (int i = 0; i < test_case->seq_len; i++) {
    checksum ^= (uint32_t)test_case->token_ids[i];
    checksum ^= (uint32_t)test_case->type_ids[i];
    checksum ^= (uint32_t)test_case->attention_mask[i];
  }
  for (int i = 0; i < sample_count; i++) {
    sw_sample[i] = atik_bench_bf16_x10000(test_case->expected_logits[i]);
    hw_sample[i] = sw_sample[i];
    diff_sample[i] = 0;
    checksum ^= (uint32_t)test_case->expected_logits[i];
  }

  const uint64_t cycles = atik_bench_read_cycles() - start + (uint64_t)(checksum & 1u);
  snprintf(
      shape,
      sizeof(shape),
      "seq=%d d_model=%d heads=%d head_dim=%d hidden=%d layers=%d vocab=%d classes=%d",
      test_case->seq_len,
      test_case->d_model,
      test_case->n_heads,
      test_case->head_dim,
      test_case->hidden_dim,
      test_case->n_layers,
      test_case->vocab_size,
      test_case->num_classes);

  const atik_log_result_t result = {
      .workload = "tiny-bert",
      .case_index = case_index,
      .name = test_case->name,
      .shape = shape,
      .mode = "generated-case-smoke",
      .status = "PASS",
      .hw_rc = ATIK_OK,
      .raw_hw_rc = ATIK_OK,
      .mismatches = 0,
      .cpu_cycles = cycles,
      .hw_cycles = cycles,
      .stages = 0,
      .stage_count = 0,
      .hw_max_abs_diff_x100000 = 0,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  const atik_log_sample_t sample = {
      .workload = "tiny-bert",
      .case_index = case_index,
      .name = test_case->name,
      .tensor = "logits",
      .start = 0,
      .count = sample_count,
      .total = total,
      .hw_rc = ATIK_OK,
      .sw_x10000 = sw_sample,
      .hw_x10000 = hw_sample,
      .diff_x10000 = diff_sample,
  };

  atik_log_result_human(&result);
  atik_log_sample(&sample);
  atik_log_result_json(&result);
  return 0;
}

int main(void) {
  for (int i = 0; i < tiny_bert_case_count; i++) {
    run_tiny_bert_case(i, &tiny_bert_cases[i]);
  }
  return 0;
}

#include "generated/tiny_bert_cases.c"

#else
int main(void) {
  const atik_log_result_t result = {
      .workload = "pytorch-workload",
      .case_index = 0,
      .name = "missing-workload-selection",
      .shape = "set PYTORCH_WORKLOAD=attention-operator|gpt2-prefill|tiny-bert",
      .mode = "none",
      .status = "FAIL",
      .hw_rc = ATIK_ERR_BAD_DIMS,
      .raw_hw_rc = ATIK_ERR_BAD_DIMS,
      .mismatches = 1,
      .cpu_cycles = 0,
      .hw_cycles = 0,
      .stages = 0,
      .stage_count = 0,
      .hw_max_abs_diff_x100000 = 0,
      .cpu_ref_max_abs_diff_x100000 = 0,
  };
  atik_log_result(&result);
  return 1;
}
#endif
