#pragma once

#define MAX_ASSEM 30
class Disassem {
private:
	int idx = 0;
	int fileSize = 0;
public:
	Disassem(int _fileSize) : idx(0), fileSize(_fileSize) { }
	int disas(char* code);
};