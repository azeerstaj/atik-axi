# Atik Descriptor ABI

Software describes an operation with a descriptor. Hardware owns tiling,
packing, DMA scheduling, SRAM layout, compute, softmax, and writeback.

## Core Rule

Software-visible tensors are normal row-major BF16 arrays. Packed tile formats
are internal to hardware.

## Descriptor

```c
typedef enum {
  ATIK_OP_MATMUL = 0,
  ATIK_OP_ATTENTION = 1,
  ATIK_OP_CAUSAL_ATTENTION = 2
} atik_op_t;

typedef struct {
  uint32_t op;
  uint32_t reserved0;

  uint64_t a_addr;    // matmul A, or attention Q
  uint64_t b_addr;    // matmul B, or attention K
  uint64_t v_addr;    // attention V, unused for matmul
  uint64_t out_addr;  // matmul C, or attention O

  uint32_t m;         // matmul M, or attention q_rows
  uint32_t n;         // matmul N, or attention value_cols
  uint32_t k;         // matmul K, or attention d_k
  uint32_t kv_len;    // attention kv_rows, unused for matmul

  uint32_t lda;
  uint32_t ldb;
  uint32_t ldv;
  uint32_t ldout;

  uint16_t scale_bf16; // attention scale, usually 1/sqrt(d_k)
  uint16_t reserved1;
  uint32_t reserved2;
} atik_desc_t;
```

## Matmul Interpretation

```text
a_addr  -> A[M,K]
b_addr  -> B[K,N]
out_addr -> C[M,N]

m = M
n = N
k = K
kv_len unused

lda = leading dimension of A
ldb = leading dimension of B
ldout = leading dimension of C
ldv unused
```

## Attention Interpretation

```text
a_addr  -> Q[q_rows,d_k]
b_addr  -> K[kv_rows,d_k]
v_addr  -> V[kv_rows,value_cols]
out_addr -> O[q_rows,value_cols]

m = q_rows
n = value_cols
k = d_k
kv_len = kv_rows

lda = leading dimension of Q
ldb = leading dimension of K
ldv = leading dimension of V
ldout = leading dimension of O
```

## Assumptions

- input dtype is BF16
- output dtype is BF16
- tensors are row-major
- hardware performs packing
