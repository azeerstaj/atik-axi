### Descriptor Reader
* Initialized under `AtikCore`.
* Controlled by the `AtikController`.
* Ignores `io.start` unless in `Idle` or `Done`.
* Uses `DmaReader` to request `atik_desc_t` from memory.

    #### Main Scenario
    1) Receives `io.start` and the corresponding `io.addr` from `AtikController`.
    2) Flushes current flags and data registers.
    3) Asks `DmaReader` for `params.descriptorBeats` beats starting at `io.addr`.
    4) Parses the returned beats and maps them to `io.desc`.
