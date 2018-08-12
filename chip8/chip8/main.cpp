#include <stdio.h>
#include "chip8emu.h"
#include <iostream>

using namespace std;

Chip8Emu chip8;
int main(int argc, char* argv[])
{
	if (argc != 2) {
		cout << "[*]usage: " << argv[0] << " gamefile" << endl;
	}

	chip8.LoadGame(argv[1]);
	
	while (1)
	{
		chip8.emulateCycle();

		if (chip8.getDrawFlag())
			cout << "Drawing" << endl;
		
		// Store key press state
		chip8.setKeys();
	}
	return 0;
}