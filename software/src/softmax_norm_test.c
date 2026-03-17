#include "rocc.h"
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#ifndef MAX_TEST_SIZE
#define MAX_TEST_SIZE 2048
#endif

static inline uint16_t float_to_bf16(float f) {
    uint32_t bits;
    memcpy(&bits, &f, sizeof(bits));
    return (uint16_t)(bits >> 16);
}

static inline float bf16_to_float(uint16_t bfloat) {
    uint32_t bits = ((uint32_t)bfloat) << 16;
    float f;
    memcpy(&f, &bits, sizeof(f));
    return f;
}

static void print_float(const char* label, float val) {
    if (val < 0.0f) {
        printf("%s-", label);
        val = -val;
    } else {
        printf("%s", label);
    }
    int whole_part = (int)val;
    int frac_part = (int)((val - (float)whole_part) * 10000.0f);
    printf("%d.%04d\n", whole_part, frac_part);
}

static void print_float_inline(float val) {
    if (val < 0.0f) {
        printf("-");
        val = -val;
    }
    int whole_part = (int)val;
    int frac_part = (int)((val - (float)whole_part) * 10000.0f);
    printf("%d.%04d ", whole_part, frac_part);
}

static void print_array_samples(float *arr, uint64_t size, const char* name) {
    printf("\n--- ARRAY MONITOR: %s (Size: %lu) ---\n", name, (unsigned long)size);

    printf("First 10:  [ ");
    for(uint64_t i = 0; i < 10 && i < size; i++) {
        print_float_inline(arr[i]);
    }
    printf("]\n");

    if (size >= 30) {
        printf("Middle 10: [ ");
        uint64_t mid_start = (size / 2) - 5;
        for(uint64_t i = mid_start; i < mid_start + 10; i++) {
            print_float_inline(arr[i]);
        }
        printf("]\n");
    }

    if (size >= 20) {
        printf("Last 10:   [ ");
        uint64_t last_start = size - 10;
        for(uint64_t i = last_start; i < size; i++) {
            print_float_inline(arr[i]);
        }
        printf("]\n");
    }
    printf("------------------------------------------------\n");
}

static void print_uq32_32(const char* label, uint64_t v) {
    uint32_t int_part = (uint32_t)(v >> 32);
    uint32_t frac_part = (uint32_t)(v & 0xFFFFFFFFu);
    uint64_t frac_dec = ((uint64_t)frac_part * 1000000ULL) >> 32;
    printf("%s%u.%06lu (0x%08x.%08x)\n", label, int_part, (unsigned long)frac_dec, int_part, frac_part);
}

static inline float uq32_32_to_float(uint64_t fixed_val) {
    return (float)((double)fixed_val / 4294967296.0);
}

static float rand_float() {
    return ((float)rand() / (float)(RAND_MAX)) * 4.0f - 2.0f;
}

// Read the RISC-V 64-bit hardware cycle counter
static inline uint64_t read_cycles(void) {
    uint64_t cycles;
    asm volatile ("fence; rdcycle %0" : "=r" (cycles));
    return cycles;
}

uint16_t bf16_array[MAX_TEST_SIZE] __attribute__ ((aligned (64)));
uint64_t out_array[MAX_TEST_SIZE] __attribute__ ((aligned (64)));
float float_array[MAX_TEST_SIZE];
float sw_softmax[MAX_TEST_SIZE];
float hw_softmax[MAX_TEST_SIZE];

static inline uint64_t rocc_pass1(uint16_t *start, uint64_t length) {
    uint64_t raw_bits;
    asm volatile ("fence");
    ROCC_INSTRUCTION_DSS(0, raw_bits, start, length, 0);
    return raw_bits;
}

static inline uint64_t rocc_pass2(uint64_t *out) {
    uint64_t raw_bits;
    asm volatile ("fence");
    ROCC_INSTRUCTION_DS(0, raw_bits, out, 1);
    return raw_bits;
}

int main(void) {
    uint64_t test_sizes[] = {256, 512, 1024, 2048};
    int num_tests = sizeof(test_sizes) / sizeof(test_sizes[0]);
    int test_failed = 0;

    srand(1);
    printf("CSV_HEADER, ArraySize, SW_Cycles, HW_Cycles, Speedup_Multiplier\n");

    for (int t = 0; t < num_tests; t++) {
        uint64_t current_size = test_sizes[t];
        if (current_size > MAX_TEST_SIZE) {
            printf("[!] MAX_TEST_SIZE too small for %lu\n", (unsigned long)current_size);
            return 1;
        }

        for (uint64_t i = 0; i < current_size; i++) {
            float v = rand_float();
            float_array[i] = v;
            bf16_array[i] = float_to_bf16(v);
            out_array[i] = 0;
        }

        print_array_samples(float_array, current_size, "Input Float Array");

        uint64_t sw_start = read_cycles();
        float max_val = -INFINITY;
        for (uint64_t i = 0; i < current_size; i++) {
            float v = bf16_to_float(bf16_array[i]);
            if (v > max_val) max_val = v;
        }
        double denom = 0.0;
        for (uint64_t i = 0; i < current_size; i++) {
            float v = bf16_to_float(bf16_array[i]);
            denom += exp((double)(v - max_val));
        }
        for (uint64_t i = 0; i < current_size; i++) {
            float v = bf16_to_float(bf16_array[i]);
            sw_softmax[i] = (float)(exp((double)(v - max_val)) / denom);
        }
        uint64_t sw_end = read_cycles();

        print_float("Software max: ", max_val);
        print_float("Software denom: ", (float)denom);
        print_array_samples(sw_softmax, current_size, "Software Softmax");

        uint64_t hw_start = read_cycles();
        uint64_t sum_raw = rocc_pass1(bf16_array, current_size);
        uint64_t hw_mid = read_cycles();

        uint64_t sum_raw2 = rocc_pass2(out_array);
        uint64_t hw_end = read_cycles();

        printf("\nHW sum (pass1):\n");
        print_uq32_32("  ", sum_raw);
        printf("HW sum (pass2 response):\n");
        print_uq32_32("  ", sum_raw2);

        for (uint64_t i = 0; i < current_size; i++) {
            hw_softmax[i] = uq32_32_to_float(out_array[i]);
        }
        print_array_samples(hw_softmax, current_size, "Hardware Softmax");

        // Pairwise check
        for (uint64_t i = 0; i < current_size; i++) {
            float diff = hw_softmax[i] - sw_softmax[i];
            if (diff < 0) diff = -diff;
            if (diff > 0.01f) {
                printf("\n[!] MISMATCH at index %lu (size %lu)\n", (unsigned long)i, (unsigned long)current_size);
                print_float("    SW: ", sw_softmax[i]);
                print_float("    HW: ", hw_softmax[i]);
                test_failed = 1;
                break;
            }
        }

        uint64_t sw_cycles = sw_end - sw_start;
        uint64_t hw_cycles = hw_end - hw_start;
        double speedup = (double)sw_cycles / (double)hw_cycles;
        int speedup_int = (int)speedup;
        int speedup_frac = (int)((speedup - (double)speedup_int) * 100.0);

        printf("\n--- SOFTWARE PERFORMANCE ---\n");
        printf("Software Cycles: %lu\n", (unsigned long)sw_cycles);
        printf("\n--- PERFORMANCE ---\n");
        printf("Pass1 cycles: %lu\n", (unsigned long)(hw_mid - hw_start));
        printf("Pass2 cycles: %lu\n", (unsigned long)(hw_end - hw_mid));

        printf("CSV_DATA, %lu, %lu, %lu, %d.%02d\n",
            (unsigned long)current_size,
            (unsigned long)sw_cycles,
            (unsigned long)hw_cycles,
            speedup_int,
            speedup_frac
        );

        if (test_failed) {
            break;
        }
    }

    return test_failed ? 1 : 0;
}
