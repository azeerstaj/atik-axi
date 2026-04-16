#!/usr/bin/env bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************"
echo "========Attention BF16========="
/root/attention_bf16_test.riscv
echo "*****************END SCRIPT*************"

poweroff -f
