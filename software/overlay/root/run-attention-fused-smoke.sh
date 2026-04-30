#!/usr/bin/env bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************"
echo "========Attention Fused BF16========="
/root/attention_fused_bf16_test.riscv
echo "*****************END SCRIPT*************"

poweroff -f
