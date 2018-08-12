#pragma once
#include <string>
#define MAX_MEM 4096

class Chip8Emu
{
private:
	int drawFlag;
	unsigned short opcode;
	char mem[MAX_MEM];
	unsigned char V[16];
	unsigned short I;
	unsigned short pc;
	unsigned short stack[16];
	unsigned short sp;
	unsigned char gfx[64 * 32];
	unsigned char delay_timer;
	unsigned char sound_timer;
	unsigned char key[16];

public:
	Chip8Emu();
	void LoadGame(char* fileName);
	void emulateCycle();
	void setKeys();
	int getDrawFlag();
};