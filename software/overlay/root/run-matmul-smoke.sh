#!/bin/bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************" #> $OUT_FILE_NAME

echo "========Matmul Simple BF16 Weight-Stationary=========\n"
/root/systolic_matmul_simple_bfloat16_weight_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Random BF16 Weight-Stationary=========\n"
/root/systolic_matmul_random_bfloat16_weight_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Benchmark BF16 Weight-Stationary=========\n"
/root/systolic_matmul_benchmark_bfloat16_weight_stationary.riscv #>> $OUT_FILE_NAME

echo "*****************END SCRIPT*************" #> $OUT_FILE_NAME

poweroff -f
