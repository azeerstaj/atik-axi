#!/bin/bash

echo "TEST STATRTED !!!"
/root/softmax_norm_fpga_smoke.riscv
echo "TEST EXIT CODE: $?"
echo "TEST FINISHED !!!"

poweroff -f
