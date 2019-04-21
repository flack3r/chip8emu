#pragma once
#include "Cpu.h"
#include "Disassemh.h"
#include <string>

using namespace std;
class Chip8CPU : public Cpu
{
private:
	Disassem* disasm;
	int pc;
	int sp;
	int A, B, C, D, E, H, L, F;
	//set register from opcode
	void fetch();
	int decode();
	void execute();
public:
	Chip8CPU(): Cpu() { 
		A = 0, B = 0, C = 0, D = 0, E = 0, H = 0, L = 0, F=0;
		sp = 0;
		pc = 0;
	}
	virtual void run();
};