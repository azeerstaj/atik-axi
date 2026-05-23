#include "atik.h"

#include "atik_rocc.h"

#include <stddef.h>

#ifndef ATIK_DEFAULT_MAX_POLLS
#define ATIK_DEFAULT_MAX_POLLS 100000000ull
#endif

static int status_to_error(uint64_t status) {
  if ((status & ATIK_STATUS_ERROR_MASK) == 0) {
    return ATIK_OK;
  }
  return (int)((status & ATIK_STATUS_ERROR_MASK_FIELD) >> ATIK_STATUS_ERROR_SHIFT);
}

static int validate_matmul(
    const uint16_t *A,
    int M,
    int K,
    int lda,
    const uint16_t *B,
    int N,
    int ldb,
    uint16_t *C,
    int ldc) {
  if (M <= 0 || N <= 0 || K <= 0 || lda < K || ldb < N || ldc < N) {
    return ATIK_ERR_BAD_DIMS;
  }
  if (A == NULL || B == NULL || C == NULL) {
    return ATIK_ERR_BAD_ADDR;
  }
  return ATIK_OK;
}

static int validate_attention(
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
    uint16_t *O,
    int ldo) {
  if (q_rows <= 0 || kv_rows <= 0 || d_k <= 0 || value_cols <= 0 ||
      ldq < d_k || ldk < d_k || ldv < value_cols || ldo < value_cols) {
    return ATIK_ERR_BAD_DIMS;
  }
  if (Q == NULL || K == NULL || V == NULL || O == NULL) {
    return ATIK_ERR_BAD_ADDR;
  }
  return ATIK_OK;
}

int atik_submit(const atik_desc_t *desc) {
  if (desc == NULL) {
    return ATIK_ERR_BAD_ADDR;
  }

  asm volatile("fence rw, rw" ::: "memory");

  uint64_t rc = atik_rocc_set_desc(desc);
  if (rc != ATIK_OK) {
    return (int)rc;
  }

  rc = atik_rocc_run();
  if (rc != ATIK_OK) {
    return (int)rc;
  }

  return ATIK_OK;
}

int atik_poll_status(uint64_t *raw_status) {
  uint64_t status = atik_rocc_status();
  if (raw_status != NULL) {
    *raw_status = status;
  }
  return status_to_error(status);
}

int atik_wait(uint64_t max_polls, uint64_t *raw_status) {
  uint64_t status = 0;
  uint64_t polls = 0;

  if (max_polls == 0) {
    max_polls = ATIK_DEFAULT_MAX_POLLS;
  }

  do {
    status = atik_rocc_status();
    int err = status_to_error(status);
    if (err != ATIK_OK) {
      if (raw_status != NULL) {
        *raw_status = status;
      }
      return err;
    }
    if ((status & ATIK_STATUS_BUSY_MASK) == 0) {
      if (raw_status != NULL) {
        *raw_status = status;
      }
      asm volatile("fence rw, rw" ::: "memory");
      return ATIK_OK;
    }
    polls++;
  } while (polls < max_polls);

  if (raw_status != NULL) {
    *raw_status = status;
  }
  return ATIK_ERR_TIMEOUT;
}

uint64_t atik_read_counter(uint64_t index) {
  return atik_rocc_read_counter(index);
}

int atik_clear_counters(void) {
  uint64_t rc = atik_rocc_clear_counters();
  return rc == ATIK_OK ? ATIK_OK : (int)rc;
}

int atik_reset(void) {
  uint64_t rc = atik_rocc_reset();
  return rc == ATIK_OK ? ATIK_OK : (int)rc;
}

int atik_matmul_bf16(
    const uint16_t *A,
    int M,
    int K,
    int lda,
    const uint16_t *B,
    int N,
    int ldb,
    uint16_t *C,
    int ldc) {
  int rc = validate_matmul(A, M, K, lda, B, N, ldb, C, ldc);
  if (rc != ATIK_OK) {
    return rc;
  }

  atik_desc_t desc = {
      .op = ATIK_OP_MATMUL,
      .a_addr = (uint64_t)(uintptr_t)A,
      .b_addr = (uint64_t)(uintptr_t)B,
      .v_addr = 0,
      .out_addr = (uint64_t)(uintptr_t)C,
      .m = (uint32_t)M,
      .n = (uint32_t)N,
      .k = (uint32_t)K,
      .kv_len = 0,
      .lda = (uint32_t)lda,
      .ldb = (uint32_t)ldb,
      .ldv = 0,
      .ldout = (uint32_t)ldc,
      .scale_bf16 = 0,
  };

  rc = atik_submit(&desc);
  if (rc != ATIK_OK) {
    return rc;
  }
  return atik_wait(0, NULL);
}

static int run_attention(
    atik_op_t op,
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
    int ldo) {
  int rc = validate_attention(Q, q_rows, d_k, ldq, K, kv_rows, ldk, V, value_cols, ldv, O, ldo);
  if (rc != ATIK_OK) {
    return rc;
  }

  atik_desc_t desc = {
      .op = (uint32_t)op,
      .a_addr = (uint64_t)(uintptr_t)Q,
      .b_addr = (uint64_t)(uintptr_t)K,
      .v_addr = (uint64_t)(uintptr_t)V,
      .out_addr = (uint64_t)(uintptr_t)O,
      .m = (uint32_t)q_rows,
      .n = (uint32_t)value_cols,
      .k = (uint32_t)d_k,
      .kv_len = (uint32_t)kv_rows,
      .lda = (uint32_t)ldq,
      .ldb = (uint32_t)ldk,
      .ldv = (uint32_t)ldv,
      .ldout = (uint32_t)ldo,
      .scale_bf16 = scale_bf16,
  };

  rc = atik_submit(&desc);
  if (rc != ATIK_OK) {
    return rc;
  }
  return atik_wait(0, NULL);
}

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
    int ldo) {
  return run_attention(ATIK_OP_ATTENTION, Q, q_rows, d_k, ldq, K, kv_rows, ldk, V, value_cols, ldv, scale_bf16, O, ldo);
}

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
    int ldo) {
  return run_attention(ATIK_OP_CAUSAL_ATTENTION, Q, q_rows, d_k, ldq, K, kv_rows, ldk, V, value_cols, ldv, scale_bf16, O, ldo);
}
