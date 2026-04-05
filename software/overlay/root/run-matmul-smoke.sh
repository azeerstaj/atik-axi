#!/bin/bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************" #> $OUT_FILE_NAME

echo "========Matmul Simple Output-Stationary=========\n"
/root/systolic_matmul_simple_output_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Random Output-Stationary=========\n"
/root/systolic_matmul_random_output_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Simple Weight-Stationary=========\n"
/root/systolic_matmul_simple_weight_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Random Weight-Stationary=========\n"
/root/systolic_matmul_random_weight_stationary.riscv #>> $OUT_FILE_NAME

echo "\n\n\n========Matmul Benchmark=========\n"
/root/systolic_matmul_benchmark.riscv #>> $OUT_FILE_NAME

echo "*****************END SCRIPT*************" #> $OUT_FILE_NAME

poweroff -f
