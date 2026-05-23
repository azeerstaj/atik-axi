# RoCC Commands

The RoCC command interface should be minimal. Software passes a descriptor
pointer and asks hardware to run.

## Commands

```text
ATIK_CMD_SET_DESC
  rs1 = descriptor address
  rs2 = unused
  returns status

ATIK_CMD_RUN
  rs1 = unused
  rs2 = unused
  returns launch status

ATIK_CMD_STATUS
  rs1 = unused
  rs2 = unused
  returns busy/done/error state

ATIK_CMD_READ_COUNTER
  rs1 = counter index
  rs2 = unused
  returns counter value

ATIK_CMD_CLEAR_COUNTERS
  rs1 = unused
  rs2 = unused
  returns status

ATIK_CMD_RESET
  optional debug command
```

## Intended Software Sequence

```text
fill descriptor in memory
fence memory
ATIK_CMD_SET_DESC(desc_addr)
ATIK_CMD_RUN()
poll ATIK_CMD_STATUS() or wait for response
fence memory
read output tensor
```

## Non-Goals

The ABI should not expose:

- pack Q
- set QK address
- precompute scores
- set V address
- apply cached scores
- internal FSM states

Those steps are internal hardware scheduling details.
