#include "atik_ref.h"

#include <math.h>
#include <stdint.h>
#include <string.h>

float atik_bf16_to_float(uint16_t bits) {
  uint32_t word = ((uint32_t)bits) << 16;
  float value;
  memcpy(&value, &word, sizeof(value));
  return value;
}

uint16_t atik_float_to_bf16(float value) {
  uint32_t word;
  memcpy(&word, &value, sizeof(word));
  uint32_t lsb = (word >> 16) & 1u;
  uint32_t rounding_bias = 0x7fffu + lsb;
  return (uint16_t)((word + rounding_bias) >> 16);
}

void atik_ref_matmul_bf16(
    const uint16_t *A,
    int M,
    int K,
    int lda,
    const uint16_t *B,
    int N,
    int ldb,
    uint16_t *C,
    int ldc) {
  for (int m = 0; m < M; m++) {
    for (int n = 0; n < N; n++) {
      float acc = 0.0f;
      for (int k = 0; k < K; k++) {
        acc += atik_bf16_to_float(A[m * lda + k]) * atik_bf16_to_float(B[k * ldb + n]);
      }
      C[m * ldc + n] = atik_float_to_bf16(acc);
    }
  }
}

static float attention_score(
    const uint16_t *Q,
    int q_row,
    int d_k,
    int ldq,
    const uint16_t *K,
    int kv_row,
    int ldk,
    float scale) {
  float acc = 0.0f;
  for (int d = 0; d < d_k; d++) {
    acc += atik_bf16_to_float(Q[q_row * ldq + d]) * atik_bf16_to_float(K[kv_row * ldk + d]);
  }
  return acc * scale;
}

void atik_ref_attention_bf16(
    const uint16_t *Q,
    int q_rows,
    int d_k,
    int ldq,
    const uint16_t *K,
    int kv_rows,
    int ldk,
    const uint16_t *V,
    int value_cols,
    int ldv,
    uint16_t scale_bf16,
    uint16_t *O,
    int ldo,
    int causal) {
  const float scale = atik_bf16_to_float(scale_bf16);

  for (int q = 0; q < q_rows; q++) {
    float row_max = -INFINITY;
    for (int kv = 0; kv < kv_rows; kv++) {
      if (causal && kv > q) {
        continue;
      }
      float score = attention_score(Q, q, d_k, ldq, K, kv, ldk, scale);
      if (score > row_max) {
        row_max = score;
      }
    }

    float denom = 0.0f;
    for (int kv = 0; kv < kv_rows; kv++) {
      if (causal && kv > q) {
        continue;
      }
      float score = attention_score(Q, q, d_k, ldq, K, kv, ldk, scale);
      denom += expf(score - row_max);
    }

    for (int c = 0; c < value_cols; c++) {
      float acc = 0.0f;
      for (int kv = 0; kv < kv_rows; kv++) {
        if (causal && kv > q) {
          continue;
        }
        float score = attention_score(Q, q, d_k, ldq, K, kv, ldk, scale);
        float prob = denom == 0.0f ? 0.0f : expf(score - row_max) / denom;
        acc += prob * atik_bf16_to_float(V[kv * ldv + c]);
      }
      O[q * ldo + c] = atik_float_to_bf16(acc);
    }
  }
}
