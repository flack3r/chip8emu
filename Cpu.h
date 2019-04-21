#pragma once

class Cpu {
protected:
	char* mem;
	int mem_size;

public:
	Cpu() : mem_size(0) {}
	~Cpu();
	int loadProgram(const char* programPath);
	virtual void run()=0;	
};