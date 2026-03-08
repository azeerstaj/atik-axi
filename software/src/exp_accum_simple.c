#include "rocc.h"
#include <stdint.h>
#include <stdio.h>
#include <math.h>

// Helper to print floats using only integer printf
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

// Helper to cast a 32-bit float to a 16-bit bfloat16
static inline uint16_t float_to_bf16(float f) {
    uint32_t *ptr = (uint32_t *)&f;
    return (*ptr) >> 16; 
}

// --- NEW: Convert UQ32.32 to standard C float ---
static inline float uq32_32_to_float(uint64_t fixed_val) {
    // 2^32 = 4294967296.0
    // We cast to double first to prevent precision loss before the division
    return (float)((double)fixed_val / 4294967296.0);
}

// Read the RISC-V 64-bit hardware cycle counter
static inline uint64_t read_cycles(void) {
    uint64_t cycles;
    asm volatile ("fence; rdcycle %0" : "=r" (cycles));
    return cycles;
}

uint16_t bf16_array[16] __attribute__ ((aligned (64)));

static inline uint64_t accumulate_vexp(uint16_t *start, uint64_t length) {
    uint64_t raw_bits;
    asm volatile ("fence");
    
    // Hardware writes the raw UQ32.32 bit-pattern into raw_bits
    ROCC_INSTRUCTION_DSS(0, raw_bits, start, length, 0); 
    
    return raw_bits;
}

int main(void) {
    float test_vals[16] = {
        0.0, 1.0, 2.0, 3.0, 
        -4.0, -1.5, -2.5, 0.5, 
        0.0, 0.0, 0.0, 0.0, 
        0.0, 0.0, 0.0, 0.0
    };
    
    float expected_float_sum = 0.0f;

    printf("Populating BFloat16 Array...\n");
    for(int i = 0; i < 16; i++) {
        bf16_array[i] = float_to_bf16(test_vals[i]);
    }

    // --- SOFTWARE BENCHMARK ---
    printf("\nExecuting Software (libm expf)...\n");
    uint64_t sw_start = read_cycles();
    
    for(int i = 0; i < 16; i++) {
        expected_float_sum += expf(test_vals[i]);
    }
    
    uint64_t sw_end = read_cycles();
    uint64_t sw_cycles = sw_end - sw_start;

    // Simulate what the expected float should look like in UQ32.32 format
    uint64_t expected_uq32_32 = (uint64_t)((double)expected_float_sum * 4294967296.0);

    // --- HARDWARE BENCHMARK ---
    printf("Executing RoCC VEXP Accumulator...\n");
    uint64_t hw_start = read_cycles();
    
    uint64_t raw_hw_bits = accumulate_vexp(bf16_array, 16);
    
    // --- THE FIX: Implicit Dependency Stall ---
    // This dummy instruction forces the CPU to wait for the RoCC writeback
    // before it is allowed to read the ending clock cycle.
    asm volatile ("add zero, zero, %0" : : "r" (raw_hw_bits));
    
    uint64_t hw_end = read_cycles();
    uint64_t hw_cycles = hw_end - hw_start;

    // --- RESULTS PARSING ---
    float hw_float_res = uq32_32_to_float(raw_hw_bits);

    // Extract Integer and Fraction bits for display
    uint32_t hw_int_part  = (uint32_t)(raw_hw_bits >> 32);
    uint32_t hw_frac_part = (uint32_t)(raw_hw_bits & 0xFFFFFFFF);
    uint32_t sw_int_part  = (uint32_t)(expected_uq32_32 >> 32);
    uint32_t sw_frac_part = (uint32_t)(expected_uq32_32 & 0xFFFFFFFF);

    // --- DECIMAL RESULTS ---
    printf("\n--- RESULTS (DECIMAL) ---\n");
    print_float("Software Expected Float: ", expected_float_sum);
    print_float("Hardware Computed Float: ", hw_float_res);
    
    // --- BIT-BY-BIT UQ32.32 COMPARISON (HEX) ---
    printf("\n--- UQ32.32 BIT COMPARISON (HEX) ---\n");
    printf("Format: [Integer 32b] . [Fraction 32b]\n");
    
    printf("Expected UQ32.32: 0x%08lx . 0x%08lx\n", (unsigned long)sw_int_part, (unsigned long)sw_frac_part);
    printf("Hardware UQ32.32: 0x%08lx . 0x%08lx\n", (unsigned long)hw_int_part, (unsigned long)hw_frac_part);
    
    // Note: The fractional XOR will likely not be 0x00000000 due to polynomial approximation differences
    printf("XOR Difference:   0x%08lx . 0x%08lx\n", (unsigned long)(sw_int_part ^ hw_int_part), (unsigned long)(sw_frac_part ^ hw_frac_part));

    // --- PERFORMANCE ---
    printf("\n--- PERFORMANCE ---\n");
    printf("Software Cycles: %lu\n", (unsigned long)sw_cycles);
    printf("Hardware Cycles: %lu\n", (unsigned long)hw_cycles);
    
    if (hw_cycles < sw_cycles) {
        unsigned long speedup = (unsigned long)(sw_cycles / hw_cycles);
        printf("Hardware is FASTER! Approx Speedup: %lux\n", speedup);
    } else {
        printf("Hardware is SLOWER by %lu cycles.\n", (unsigned long)(hw_cycles - sw_cycles));
    }

    // --- TOLERANCE CHECK ---
    float error = hw_float_res - expected_float_sum;
    if (error < 0) error = -error; 
    
    // BFloat16 polynomial accumulation will have some intrinsic drift vs standard libm
    if (error < 5.0f) {
        printf("\nSuccess! Hardware UQ32.32 matches expected mathematical model.\n");
        return 0;
    }
    
    printf("\nFailure: Hardware UQ32.32 diverges too much from expected float.\n");
    return 1;
}