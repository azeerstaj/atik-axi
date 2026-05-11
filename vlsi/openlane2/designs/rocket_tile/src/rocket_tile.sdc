create_clock -name core_clock -period 100 [get_ports clock]

set_input_delay 10 -clock core_clock [all_inputs]
set_output_delay 10 -clock core_clock [all_outputs]

set_input_delay 0 -clock core_clock [get_ports clock]
set_input_delay 0 -clock core_clock [get_ports reset]
