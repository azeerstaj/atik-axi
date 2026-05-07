#include "systolic_ws.h"

#include <math.h>
#include <stdint.h>
#include <stdio.h>

#define SOFTDBG_MAX_LEN 256
#define SCORE_FRAC_BITS 16
#define PROB_FRAC_BITS 54
#define TILE_COLS 8

typedef struct {
  const char *name;
  int len;
  uint32_t seed;
} softdbg_case_t;

static int64_t scores[SOFTDBG_MAX_LEN];
static double ref_score[SOFTDBG_MAX_LEN];
static double ref_diff[SOFTDBG_MAX_LEN];
static double ref_exp[SOFTDBG_MAX_LEN];
static double ref_prob[SOFTDBG_MAX_LEN];
static double ref_tile_max[SOFTDBG_MAX_LEN / TILE_COLS];
static double ref_tile_denom[SOFTDBG_MAX_LEN / TILE_COLS];

static double fixed_s64_to_double(int64_t value, int frac_bits) {
  return (double)value / (double)(1ULL << frac_bits);
}

static double fixed_u64_to_double(uint64_t value, int frac_bits) {
  return (double)value / (double)(1ULL << frac_bits);
}

static void print_double6(double value) {
  if (value < 0.0) {
    putchar('-');
    value = -value;
  }
  const uint64_t whole = (uint64_t)value;
  const uint64_t frac = (uint64_t)((value - (double)whole) * 1000000.0);
  printf("%lu.%06lu", (unsigned long)whole, (unsigned long)frac);
}

static double abs_double(double value) {
  return value < 0.0 ? -value : value;
}

static int64_t make_score_fixed(uint32_t seed, int idx, int len) {
  uint32_t x = seed ^ (uint32_t)(idx * 0x9e3779b9u) ^ (uint32_t)(len * 0x85ebca6bu);
  x ^= x >> 16;
  x *= 0x7feb352du;
  x ^= x >> 15;
  x *= 0x846ca68bu;
  x ^= x >> 16;

  const int centered = (int)((x >> 16) & 0x7ffu) - 1024;
  int64_t score = (int64_t)centered * 256; // centered / 256.0 in Q*.16

  if ((idx % 29) == 0) {
    score += (int64_t)(2 << SCORE_FRAC_BITS);
  }
  if ((idx % 37) == 5) {
    score -= (int64_t)(3 << SCORE_FRAC_BITS);
  }
  return score;
}

static void build_reference(int len) {
  double row_max = -1.0e100;
  for (int i = 0; i < len; i++) {
    ref_score[i] = fixed_s64_to_double(scores[i], SCORE_FRAC_BITS);
    if (ref_score[i] > row_max) {
      row_max = ref_score[i];
    }
  }

  double denom = 0.0;
  for (int i = 0; i < len; i++) {
    ref_diff[i] = ref_score[i] - row_max;
    ref_exp[i] = exp(ref_diff[i]);
    denom += ref_exp[i];
  }
  for (int i = 0; i < len; i++) {
    ref_prob[i] = ref_exp[i] / denom;
  }

  double online_max = -1.0e100;
  double online_denom = 0.0;
  const int tiles = (len + TILE_COLS - 1) / TILE_COLS;
  for (int t = 0; t < tiles; t++) {
    const int base = t * TILE_COLS;
    const int limit = (base + TILE_COLS < len) ? base + TILE_COLS : len;
    double tile_max = -1.0e100;
    for (int i = base; i < limit; i++) {
      if (ref_score[i] > tile_max) {
        tile_max = ref_score[i];
      }
    }
    const double new_max = (online_max > tile_max) ? online_max : tile_max;
    double tile_sum = 0.0;
    for (int i = base; i < limit; i++) {
      tile_sum += exp(ref_score[i] - new_max);
    }
    const double old_scale = (online_max < -1.0e90) ? 0.0 : exp(online_max - new_max);
    online_denom = online_denom * old_scale + tile_sum;
    online_max = new_max;
    ref_tile_max[t] = online_max;
    ref_tile_denom[t] = online_denom;
  }
}

static int run_case(int case_idx, const softdbg_case_t *tc) {
  for (int i = 0; i < tc->len; i++) {
    scores[i] = make_score_fixed(tc->seed, i, tc->len);
  }
  build_reference(tc->len);

  uint64_t rc = ws_softdbg_set_len(tc->len);
  if (rc != 0) {
    printf("FAIL,set_len,case=%d,rc=%lu\n", case_idx, (unsigned long)rc);
    return 1;
  }
  for (int i = 0; i < tc->len; i++) {
    rc = ws_softdbg_write_score(i, scores[i]);
    if (rc != 0) {
      printf("FAIL,write_score,case=%d,idx=%d,rc=%lu\n", case_idx, i, (unsigned long)rc);
      return 1;
    }
  }

  const uint64_t start = ws_read_cycles();
  rc = ws_softdbg_run();
  const uint64_t cycles = ws_read_cycles() - start;
  if (rc != 0) {
    printf("FAIL,run,case=%d,rc=%lu\n", case_idx, (unsigned long)rc);
    return 1;
  }

  const int64_t row_max_hw_raw = ws_softdbg_read_row_max();
  const uint64_t denom_hw_raw = ws_softdbg_read_denom();
  const uint64_t inv_hw_raw = ws_softdbg_read_inv_denom();
  const double row_max_hw = fixed_s64_to_double(row_max_hw_raw, SCORE_FRAC_BITS);
  const double denom_hw = fixed_u64_to_double(denom_hw_raw, PROB_FRAC_BITS);
  const double inv_hw = fixed_u64_to_double(inv_hw_raw, PROB_FRAC_BITS);
  const double row_max_ref = ref_tile_max[(tc->len + TILE_COLS - 1) / TILE_COLS - 1];
  const double denom_ref = ref_tile_denom[(tc->len + TILE_COLS - 1) / TILE_COLS - 1];

  double max_diff_abs = 0.0;
  double max_exp_abs = 0.0;
  double max_prob_abs = 0.0;
  double sum_prob_hw = 0.0;
  int mismatches = 0;

  printf("CASE,%d,%s,len=%d,cycles=%lu,row_max_ref=", case_idx, tc->name, tc->len, (unsigned long)cycles);
  print_double6(row_max_ref);
  printf(",row_max_hw=");
  print_double6(row_max_hw);
  printf(",denom_ref=");
  print_double6(denom_ref);
  printf(",denom_hw=");
  print_double6(denom_hw);
  printf(",inv_ref=");
  print_double6(1.0 / denom_ref);
  printf(",inv_hw=");
  print_double6(inv_hw);
  printf("\n");

  const int tiles = (tc->len + TILE_COLS - 1) / TILE_COLS;
  for (int t = 0; t < tiles; t++) {
    const double tile_max_hw = fixed_s64_to_double(ws_softdbg_read_tile_max(t), SCORE_FRAC_BITS);
    const double tile_denom_hw = fixed_u64_to_double(ws_softdbg_read_tile_denom(t), PROB_FRAC_BITS);
    printf("TILE,%d,%s,tile=%d,max_ref=", case_idx, tc->name, t);
    print_double6(ref_tile_max[t]);
    printf(",max_hw=");
    print_double6(tile_max_hw);
    printf(",denom_ref=");
    print_double6(ref_tile_denom[t]);
    printf(",denom_hw=");
    print_double6(tile_denom_hw);
    printf("\n");
  }

  for (int i = 0; i < tc->len; i++) {
    const int64_t score_hw_raw = ws_softdbg_read_score(i);
    const int64_t diff_hw_raw = ws_softdbg_read_diff(i);
    const uint64_t exp_hw_raw = ws_softdbg_read_exp(i);
    const uint64_t prob_hw_raw = ws_softdbg_read_prob(i);
    const double score_hw = fixed_s64_to_double(score_hw_raw, SCORE_FRAC_BITS);
    const double diff_hw = fixed_s64_to_double(diff_hw_raw, SCORE_FRAC_BITS);
    const double exp_hw = fixed_u64_to_double(exp_hw_raw, PROB_FRAC_BITS);
    const double prob_hw = fixed_u64_to_double(prob_hw_raw, PROB_FRAC_BITS);

    const double diff_abs = abs_double(diff_hw - ref_diff[i]);
    const double exp_abs = abs_double(exp_hw - ref_exp[i]);
    const double prob_abs = abs_double(prob_hw - ref_prob[i]);
    if (diff_abs > max_diff_abs) {
      max_diff_abs = diff_abs;
    }
    if (exp_abs > max_exp_abs) {
      max_exp_abs = exp_abs;
    }
    if (prob_abs > max_prob_abs) {
      max_prob_abs = prob_abs;
    }
    if ((uint32_t)(prob_abs * 100000.0) > 2500) {
      mismatches++;
    }
    sum_prob_hw += prob_hw;

    printf("DETAIL,%d,%s,idx=%d,score_ref=", case_idx, tc->name, i);
    print_double6(ref_score[i]);
    printf(",score_hw=");
    print_double6(score_hw);
    printf(",diff_ref=");
    print_double6(ref_diff[i]);
    printf(",diff_hw=");
    print_double6(diff_hw);
    printf(",exp_ref=");
    print_double6(ref_exp[i]);
    printf(",exp_hw=");
    print_double6(exp_hw);
    printf(",prob_ref=");
    print_double6(ref_prob[i]);
    printf(",prob_hw=");
    print_double6(prob_hw);
    printf("\n");
  }

  printf("SUMMARY,%d,%s,len=%d,sum_prob_ref=", case_idx, tc->name, tc->len);
  print_double6(1.0);
  printf(",sum_prob_hw=");
  print_double6(sum_prob_hw);
  printf(",max_diff_abs_x100000=%lu,max_exp_abs_x100000=%lu,max_prob_abs_x100000=%lu,mismatches=%d\n",
         (unsigned long)(max_diff_abs * 100000.0),
         (unsigned long)(max_exp_abs * 100000.0),
         (unsigned long)(max_prob_abs * 100000.0),
         mismatches);

  return mismatches;
}

int main(void) {
  const softdbg_case_t cases[] = {
      {"tiny8", 8, 101},
      {"two_tiles16", 16, 102},
      {"gpt2_decode64", 64, 103},
      {"gpt2_context128", 128, 104},
      {"vit197", 197, 105},
      {"max256", 256, 106},
  };

  printf("=== Attention Softmax Standalone Debug Test ===\n");
  printf("FORMAT,CASE/TILE/DETAIL/SUMMARY expose score,diff,exp,denom,inv,prob for the attention softmax datapath\n");

  int total_mismatches = 0;
  const int count = (int)(sizeof(cases) / sizeof(cases[0]));
  for (int i = 0; i < count; i++) {
    total_mismatches += run_case(i, &cases[i]);
  }

  if (total_mismatches == 0) {
    printf("PASS: standalone attention softmax debug matched tolerance.\n");
  } else {
    printf("FAIL: standalone attention softmax debug mismatches=%d\n", total_mismatches);
  }
  return total_mismatches == 0 ? 0 : 1;
}
