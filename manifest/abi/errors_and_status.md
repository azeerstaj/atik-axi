# Errors and Status

Atik should report simple, explicit status codes.

## Status Codes

```c
typedef enum {
  ATIK_OK = 0,
  ATIK_ERR_BAD_OP = 1,
  ATIK_ERR_BAD_DIMS = 2,
  ATIK_ERR_BAD_ADDR = 3,
  ATIK_ERR_UNSUPPORTED_CONFIG = 4,
  ATIK_ERR_DMA = 5,
  ATIK_ERR_INTERNAL = 6
} atik_status_t;
```

## Runtime Status Word

```text
bit 0:
  busy

bit 1:
  done

bit 2:
  error

bits 15:8:
  atik_status_t error code

bits 31:16:
  optional debug state
```

## Descriptor Validation

Hardware should reject invalid descriptors before starting DMA or compute.

Matmul validation:

```text
op is MATMUL
M, N, K are nonzero
lda >= K
ldb >= N
ldout >= N
addresses are valid/aligned enough for BF16 access
```

Attention validation:

```text
op is ATTENTION or CAUSAL_ATTENTION
q_rows, value_cols, d_k, kv_len are nonzero
ldq >= d_k
ldk >= d_k
ldv >= value_cols
ldout >= value_cols
addresses are valid/aligned enough for BF16 access
```

Dimension limits should come from counter widths and implementation limits, not
from a requirement that full K or full sequence length fits in local buffers.
