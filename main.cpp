#include <stdio.h>
#include <iostream>
#include "Cpu.h"
#include "Chip8.h"

using namespace std;

int main() {
	const char* fileName = "invaders";

	printf("Easy Chip8 emulater\n");
	Cpu* cpu = new Chip8CPU();
	if (cpu->loadProgram(fileName) < 0) {
		return -1;
	}
	cpu->run();

	printf("done\n");
	return 0;
}