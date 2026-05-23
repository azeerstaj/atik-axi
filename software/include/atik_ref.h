#ifndef ATIK_REF_H
#define ATIK_REF_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

float atik_bf16_to_float(uint16_t bits);
uint16_t atik_float_to_bf16(float value);

void atik_ref_matmul_bf16(
    const uint16_t *A,
    int M,
    int K,
    int lda,
    const uint16_t *B,
    int N,
    int ldb,
    uint16_t *C,
    int ldc);

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
    int causal);

#ifdef __cplusplus
}
#endif

#endif
