#!/usr/bin/env bash

echo "TEST STARTED !"

OUT_FILE_NAME="softmax_test_output.txt"
echo "*****************TEST RESULTS*************" #> $OUT_FILE_NAME

echo "========Softmax Vector BF16========="
/root/softmax_norm_test.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Softmax Row-Wise BF16========="
/root/softmax_rows_bf16_test.riscv #>> $OUT_FILE_NAME

echo "*****************END SCRIPT*************" #> $OUT_FILE_NAME

cat $OUT_FILE_NAME
poweroff -f
