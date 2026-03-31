#!/bin/bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************" #> $OUT_FILE_NAME

echo "========Softmax Smoke========="
/root/systolic_matmul_simple.riscv #>> $OUT_FILE_NAME
echo "*****************END SCRIPT*************" #> $OUT_FILE_NAME

poweroff -f
