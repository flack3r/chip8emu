#include "Cpu.h"
#include <stdio.h>
#include <malloc.h>

Cpu::~Cpu()
{
	if(!mem){
		free(mem);
	}
}

int Cpu::loadProgram(const char* programPath)
{
	FILE* f = fopen(programPath, "rb");
	if (!f) {
		printf("unable to open file\n");
		return -1;
	}
	fseek(f, 0, SEEK_END);
	mem_size = ftell(f);
	rewind(f);

	mem = (char*)malloc(mem_size + 1);
	if (!mem) {
		printf("Memory alloc error!\n");
		fclose(f);
		return -1;
	}
	
	if (mem_size != fread(mem, 1, mem_size, f)) {
		free(mem);
		printf("reading error! \n");
		return -2;
	}
	fclose(f);
	return 0;
}
