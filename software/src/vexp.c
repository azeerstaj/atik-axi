#include "toyrocc.h"
#include <stdio.h>

static inline unsigned long vexp_trigger()
{
	unsigned long value;
	// CustomX, rd, funct7
	ROCC_INSTRUCTION_D(1, value, 0);
	return value;
}


static inline unsigned long vexp_exp(unsigned long rs1)
{
	unsigned long value;
	// CustomX, rd, funct7
	asm volatile ("fence");
	ROCC_INSTRUCTION_DS(1, value, rs1, 0);
	return value;
}


int main(void)
{
	unsigned long result;

	// 2.5 -> 0x4020
	// 1.0 -> 0x3F80
	// 100.0 -> 0x42c8
	// 10.0 -> 0x4120
	unsigned long data = 0x412042C83F804020; 		// [10.0, 100, 1, 2.5] in Bfloat16

	// 5.0 -> 0x40A0
	// 2.0 -> 0x4000
	// 200.0 -> 0x4348
	// 20.0 -> 0x41A0
	unsigned long expected = 0x41A04348400040A0;	// [20.0, 200, 2, 5.0] in Bfloat16

  	printf("[C] main()\n");
  	printf("[C] data_size = %dB\n", sizeof(data));
  	printf("Old Data : 0x%lx \n", data);

  	printf("[C] Triggering VEXP.\n");
	// result = vexp_trigger();
	result = vexp_exp(data);
  	printf("[C] VEXP Responded !\n");

  	printf("Old Data : 0x%lx \n", data);
  	printf("New Data : 0x%lx \n", result);
  	printf("Expected : 0x%lx \n", expected);

	return 0;
}
