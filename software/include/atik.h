#ifndef ATIK_H
#define ATIK_H

#include "atik_types.h"

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

int atik_submit(const atik_desc_t *desc);
int atik_poll_status(uint64_t *raw_status);
int atik_wait(uint64_t max_polls, uint64_t *raw_status);
uint64_t atik_read_counter(uint64_t index);
int atik_clear_counters(void);
int atik_reset(void);

int atik_matmul_bf16(
    const uint16_t *A,
    int M,
    int K,
    int lda,
    const uint16_t *B,
    int N,
    int ldb,
    uint16_t *C,
    int ldc);

int atik_attention_bf16(
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
    int ldo);

int atik_causal_attention_bf16(
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
    int ldo);

#ifdef __cplusplus
}
#endif

#endif
