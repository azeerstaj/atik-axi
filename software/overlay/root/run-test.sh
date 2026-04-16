#!/bin/bash

echo "TEST STATRTED !!!"
/root/softmax_norm_test.riscv
echo "TEST EXIT CODE: $?"
echo "TEST FINISHED !!!"

poweroff -f
