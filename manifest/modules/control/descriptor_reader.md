# Module: DescriptorReader

```yaml
module: DescriptorReader

purpose:
  Fetch and validate the software-visible Atik descriptor.

inputs:
  desc_addr:
    type: Addr
    meaning: address of atik_desc_t

  start:
    type: Bool
    meaning: begin descriptor fetch

outputs:
  desc:
    type: AtikDescriptor
    meaning: decoded operation descriptor

  valid:
    type: Bool
    meaning: descriptor was fetched and validated

  error:
    type: AtikStatus
    meaning: validation or fetch error

behavior: |
  Read descriptor fields from memory or command-visible storage.
  Validate operation, dimensions, strides, and required addresses.
  Emit a decoded descriptor to the selected operation controller.
```

## Notes

The descriptor reader should not interpret packed hardware formats. It only
validates the row-major BF16 tensor ABI.
