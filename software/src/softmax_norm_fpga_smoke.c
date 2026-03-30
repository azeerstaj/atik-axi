#include "rocc.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/mman.h>

#define TEST_SIZE 8

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

uint16_t input_bf16[TEST_SIZE] __attribute__((aligned(64)));
uint64_t output_uq32_32[TEST_SIZE] __attribute__((aligned(64)));

int main(void) {
    static const uint16_t input_vals_bf16[TEST_SIZE] = {
        0x0000, 0x3f00, 0x3f80, 0x3fc0,
        0xbf00, 0xbf80, 0x4000, 0x3e80,
    };
    uint64_t pass1_raw;
    uint64_t pass2_raw;

    setvbuf(stdout, NULL, _IONBF, 0);
    puts("SMOKE:START");

    if (mlockall(MCL_CURRENT | MCL_FUTURE) != 0) {
        perror("SMOKE:MLOCKALL");
        return 2;
    }

    puts("SMOKE:LOCKED");

    for (int i = 0; i < TEST_SIZE; i++) {
        input_bf16[i] = input_vals_bf16[i];
        output_uq32_32[i] = 0;
    }

    puts("SMOKE:A");
    pass1_raw = rocc_pass1(input_bf16, TEST_SIZE);
    puts("SMOKE:B");
    pass2_raw = rocc_pass2(output_uq32_32);
    puts("SMOKE:C");

    printf("pass1_raw=0x%016lx\n", (unsigned long)pass1_raw);
    printf("pass2_raw=0x%016lx\n", (unsigned long)pass2_raw);

    for (int i = 0; i < TEST_SIZE; i++) {
        printf("out[%d]=0x%016lx\n", i, (unsigned long)output_uq32_32[i]);
    }

    puts("SMOKE:DONE");
    return 0;
}
