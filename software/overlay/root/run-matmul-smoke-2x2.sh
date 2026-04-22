#!/bin/bash

echo "TEST STARTED !"

echo "*****************TEST RESULTS*************"

echo "========Matmul Simple BF16 Weight-Stationary 2x2=========\n"
/root/systolic_matmul_simple_bfloat16_weight_stationary_2x2.riscv

echo "\n\n\n========Matmul Random BF16 Weight-Stationary 2x2=========\n"
/root/systolic_matmul_random_bfloat16_weight_stationary_2x2.riscv

echo "\n\n\n========Matmul Benchmark BF16 Weight-Stationary 2x2=========\n"
/root/systolic_matmul_benchmark_bfloat16_weight_stationary_2x2.riscv

echo "*****************END SCRIPT*************"

poweroff -f
