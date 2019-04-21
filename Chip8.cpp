#include "Chip8.h"

void Chip8CPU::fetch()
{
}

int Chip8CPU::decode()
{
	return 0;
}

void Chip8CPU::execute()
{
}

void Chip8CPU::run()
{
	disasm = new Disassem(this->mem_size);
	disasm->disas((char*)this->mem);
}
