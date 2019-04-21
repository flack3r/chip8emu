#include "Disassemh.h"
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
int Disassem::disas(char* code)
{
	while (this->idx < this->fileSize) {
		printf("%04x: ", this->idx);
		unsigned char* opCode = (unsigned char*)&code[this->idx];
		switch (*opCode) {
		case 0x00:
			printf("NOP");
			this->idx += 1;
			break;
		case 0x01:
			printf("LXI\tB, #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x02:
			printf("STAX\tB");
			this->idx += 1;
			break;
		case 0x03:
			printf("INX\tB");
			this->idx += 1;
			break;
		case 0x04:
			printf("INR\tB");
			this->idx += 1;
			break;
		case 0x05:
			printf("DCR\tB");
			this->idx += 1;
			break;
		case 0x06:     
			printf("MVI\tB, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x07:
			printf("RLC");
			this->idx += 1;
			break;
		case 0x08:
			printf("error");
			return -1;
			break;
		case 0x09:
			printf("DAD B");
			this->idx += 1;
			break;
		case 0x0a:
			printf("LDAX B");
			this->idx += 1;
			break;
		case 0x0b:
			printf("DCX B");
			this->idx += 1;
			break;
		case 0x0c:
			printf("INR C");
			this->idx += 1;
			break;
		case 0x0d:
			printf("DCR C");
			this->idx += 1;
			break;
		case 0x0e:
			printf("MVI\tC, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x0f:
			printf("RRC");
			this->idx += 1;
			break;
		case 0x10:
			break;
		case 0x11:
			printf("LXI\tD, #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x12: 
			printf("STAX\tD");  
			this->idx += 1;
			break;
		case 0x13:
			printf("INX\tD");  
			this->idx += 1;
			break;
		case 0x14:
			printf("INR\tD");  
			this->idx += 1;
			break;
		case 0x15:
			printf("DCR\tD");  
			this->idx += 1;
			break;
		case 0x16:
			printf("MVI\tD, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x17:
			printf("RAL");
			this->idx += 1;
			break;
		case 0x18:
			printf("error");
			return -1;
			break;
		case 0x19:
			printf("DAD\tD");
			this->idx += 1;
			break;
		case 0x1a:
			printf("LDAX\tD");
			this->idx += 1;
			break;
		case 0x1b:
			printf("DCX\tD");
			this->idx += 1;
			break;
		case 0x1c:
			printf("INR\tE");
			this->idx += 1;
			break;
		case 0x1d:
			printf("DCR\tE");
			this->idx += 1;
			break;
		case 0x1e:
			printf("MVI\tE, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x1f:
			printf("RAR");
			this->idx += 1;
			break;
		case 0x20:
			printf("error");
			return -1;
			break;
		case 0x21:
			printf("LXI\tH, #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x22:
			printf("SHLD\t, #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x23:
			printf("INX\tH");
			this->idx += 1;
			break;
		case 0x24:
			printf("INR\tH");
			this->idx += 1;
			break;
		case 0x25:
			printf("DCR\tH");
			this->idx += 1;
			break;
		case 0x26:
			printf("MVI\tH, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x27:
			printf("DAA");
			this->idx += 1;
			break;
		case 0x28:
			printf("error");
			return -1;
			break;
		case 0x29:
			printf("DAD\tH");
			this->idx += 1;
			break;
		case 0x2a:
			printf("LHLD\t #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x2b:
			printf("DCX H");
			this->idx += 1;
			break;
		case 0x2c:
			printf("INR L");
			this->idx += 1;
			break;
		case 0x2d:
			printf("DCR L");
			this->idx += 1;
			break;
		case 0x2e:
			printf("MVI\tL, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x2f:
			printf("CMA");
			this->idx += 1;
			break;
		case 0x30:
			printf("error");
			return -1;
			break;
		case 0x31:
			printf("LXI\tSP, #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x32:
			printf("STR\t #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x33:
			printf("INX\tSP");
			this->idx += 1;
			break;
		case 0x34:
			printf("INR\tM");
			this->idx += 1;
			break;
		case 0x35:
			printf("DCR\tM");
			this->idx += 1;
			break;
		case 0x36:
			printf("MVI\tM, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x37:
			printf("STC");
			this->idx += 1;
			break;
		case 0x38:
			printf("error");
			return -1;
			break;
		case 0x39:
			printf("DAD\tSP");
			this->idx += 1;
			break;
		case 0x3a:
			printf("LDA\t #$%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0x3b:
			printf("DCX\tSP");
			this->idx += 1;
			break;
		case 0x3c:
			printf("INR\tA");
			this->idx += 1;
			break;
		case 0x3d:
			printf("DCR\tA");
			this->idx += 1;
			break;
		case 0x3e:
			printf("MVI\tA, #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0x3f:
			printf("CMC");
			this->idx += 1;
			break;
		case 0x40:
			printf("MOV\tB,B");
			this->idx += 1;
			break;
		case 0x41:
			printf("MOV\tB,C");
			this->idx += 1;
			break;
		case 0x42:
			printf("MOV\tB,D");
			this->idx += 1;
			break;
		case 0x43:
			printf("MOV\tB,E");
			this->idx += 1;
			break;
		case 0x44:
			printf("MOV\tB,H");
			this->idx += 1;
			break;
		case 0x45:
			printf("MOV\tB,L");
			this->idx += 1;
			break;
		case 0x46:
			printf("MOV\tB,M");
			this->idx += 1;
			break;
		case 0x47:
			printf("MOV\tB,A");
			this->idx += 1;
			break;
		case 0x48:
			printf("MOV\tC,B");
			this->idx += 1;
			break;
		case 0x49:
			printf("MOV\tC,C");
			this->idx += 1;
			break;
		case 0x4a:
			printf("MOV\tC,D");
			this->idx += 1;
			break;
		case 0x4b:
			printf("MOV\tC,E");
			this->idx += 1;
			break;
		case 0x4c:
			printf("MOV\tC,H");
			this->idx += 1;
			break;
		case 0x4d:
			printf("MOV\tC,L");
			this->idx += 1;
			break;
		case 0x4e:
			printf("MOV\tC,M");
			this->idx += 1;
			break;
		case 0x4f:
			printf("MOV\tC,A");
			this->idx += 1;
			break;
		case 0x50:
			printf("MOV\tD,B");
			this->idx += 1;
			break;
		case 0x51:
			printf("MOV\tD,C");
			this->idx += 1;
			break;
		case 0x52:
			printf("MOV\tD,D");
			this->idx += 1;
			break;
		case 0x53:
			printf("MOV\tD,E");
			this->idx += 1;
			break;
		case 0x54:
			printf("MOV\tD,H");
			this->idx += 1;
			break;
		case 0x55:
			printf("MOV\tD,L");
			this->idx += 1;
			break;
		case 0x56:
			printf("MOV\tD,M");
			this->idx += 1;
			break;
		case 0x57:
			printf("MOV\tD,A");
			this->idx += 1;
			break;
		case 0x58:
			printf("MOV\tE,B");
			this->idx += 1;
			break;
		case 0x59:
			printf("MOV\tE,C");
			this->idx += 1;
			break;
		case 0x5a:
			printf("MOV\tE,D");
			this->idx += 1;
			break;
		case 0x5b:
			printf("MOV\tE,E");
			this->idx += 1;
			break;
		case 0x5c:
			printf("MOV\tE,H");
			this->idx += 1;
			break;
		case 0x5d:
			printf("MOV\tE,L");
			this->idx += 1;
			break;
		case 0x5e:
			printf("MOV\tE,M");
			this->idx += 1;
			break;
		case 0x5f:
			printf("MOV\tE,A");
			this->idx += 1;
			break;
		case 0x60:
			printf("MOV\tH,B");
			this->idx += 1;
			break;
		case 0x61:
			printf("MOV\tH,C");
			this->idx += 1;
			break;
		case 0x62:
			printf("MOV\tH,D");
			this->idx += 1;
			break;
		case 0x63:
			printf("MOV\tH,E");
			this->idx += 1;
			break;
		case 0x64:
			printf("MOV\tH,H");
			this->idx += 1;
			break;
		case 0x65:
			printf("MOV\tH,L");
			this->idx += 1;
			break;
		case 0x66:
			printf("MOV\tH,M");
			this->idx += 1;
			break;
		case 0x67:
			printf("MOV\tH,A");
			this->idx += 1;
			break;
		case 0x68:
			printf("MOV\tL,B");
			this->idx += 1;
			break;
		case 0x69:
			printf("MOV\tL,C");
			this->idx += 1;
			break;
		case 0x6a:
			printf("MOV\tL,D");
			this->idx += 1;
			break;
		case 0x6b:
			printf("MOV\tL,E");
			this->idx += 1;
			break;
		case 0x6c:
			printf("MOV\tL,H");
			this->idx += 1;
			break;
		case 0x6d:
			printf("MOV\tL,L");
			this->idx += 1;
			break;
		case 0x6e:
			printf("MOV\tL,M");
			this->idx += 1;
			break;
		case 0x6f:
			printf("MOV\tL,A");
			this->idx += 1;
			break;
		case 0x70:
			printf("MOV\tM,B");
			this->idx += 1;
			break;
		case 0x71:
			printf("MOV\tM,C");
			this->idx += 1;
			break;
		case 0x72:
			printf("MOV\tM,");
			this->idx += 1;
			break;
		case 0x73:
			printf("MOV\tM,E");
			this->idx += 1;
			break;
		case 0x74:
			printf("MOV\tM,H");
			this->idx += 1;
			break;
		case 0x75:
			printf("MOV\tM,L");
			this->idx += 1;
			break;
		case 0x76:
			printf("HLT");
			this->idx += 1;
			break;
		case 0x77:
			printf("MOV\tM,A");
			this->idx += 1;
			break;
		case 0x78:
			printf("MOV\tA,B");
			this->idx += 1;
			break;
		case 0x79:
			printf("MOV\tA,C");
			this->idx += 1;
			break;
		case 0x7a:
			printf("MOV\tA,D");
			this->idx += 1;
			break;
		case 0x7b:
			printf("MOV\tA,E");
			this->idx += 1;
			break;
		case 0x7c:
			printf("MOV\tA,H");
			this->idx += 1;
			break;
		case 0x7d:
			printf("MOV\tA,L");
			this->idx += 1;
			break;
		case 0x7e:
			printf("MOV\tA,M");
			this->idx += 1;
			break;
		case 0x7f:
			printf("MOV\tA,A");
			this->idx += 1;
			break;
		case 0x80:
			printf("ADD\tB");
			this->idx += 1;
			break;
		case 0x81:
			printf("ADD\tC");
			this->idx += 1;
			break;
		case 0x82:
			printf("ADD\tD");
			this->idx += 1;
			break;
		case 0x83:
			printf("ADD\tE");
			this->idx += 1;
			break;
		case 0x84:
			printf("ADD\tH");
			this->idx += 1;
			break;
		case 0x85:
			printf("ADD\tL");
			this->idx += 1;
			break;
		case 0x86:
			printf("ADD\tM");
			this->idx += 1;
			break;
		case 0x87:
			printf("ADD\tA");
			this->idx += 1;
			break;
		case 0x88:
			printf("ADC\tB");
			this->idx += 1;
			break;
		case 0x89:
			printf("ADC\tC");
			this->idx += 1;
			break;
		case 0x8a:
			printf("ADC\tD");
			this->idx += 1;
			break;
		case 0x8b:
			printf("ADC\tE");
			this->idx += 1;
			break;
		case 0x8c:
			printf("ADC\tH");
			this->idx += 1;
			break;
		case 0x8d:
			printf("ADC\tL");
			this->idx += 1;
			break;
		case 0x8e:
			printf("ADC\tM");
			this->idx += 1;
			break;
		case 0x8f:
			printf("ADC\tA");
			this->idx += 1;
			break;
		case 0x90:
			printf("SUB\tB");
			this->idx += 1;
			break;
		case 0x91:
			printf("SUB\tC");
			this->idx += 1;
			break;
		case 0x92:
			printf("SUB\tD");
			this->idx += 1;
			break;
		case 0x93:
			printf("SUB\tE");
			this->idx += 1;
			break;
		case 0x94:
			printf("SUB\tH");
			this->idx += 1;
			break;
		case 0x95:
			printf("SUB\tL");
			this->idx += 1;
			break;
		case 0x96:
			printf("SUB\tM");
			this->idx += 1;
			break;
		case 0x97:
			printf("SUB\tA");
			this->idx += 1;
			break;
		case 0x98:
			printf("SBB\tB");
			this->idx += 1;
			break;
		case 0x99:
			printf("SBB\tC");
			this->idx += 1;
			break;
		case 0x9a:
			printf("SBB\tD");
			this->idx += 1;
			break;
		case 0x9b:
			printf("SBB\tE");
			this->idx += 1;
			break;
		case 0x9c:
			printf("SBB\tH");
			this->idx += 1;
			break;
		case 0x9d:
			printf("SBB\tL");
			this->idx += 1;
			break;
		case 0x9e:
			printf("SBB\tM");
			this->idx += 1;
			break;
		case 0x9f:
			printf("SBB\tA");
			this->idx += 1;
			break;
		case 0xa0:
			printf("ANA\tB");
			this->idx += 1;
			break;
		case 0xa1:
			printf("ANA\tC");
			this->idx += 1;
			break;
		case 0xa2:
			printf("ANA\tD");
			this->idx += 1;
			break;
		case 0xa3:
			printf("ANA\tE");
			this->idx += 1;
			break;
		case 0xa4:
			printf("ANA\tH");
			this->idx += 1;
			break;
		case 0xa5:
			printf("ANA\tL");
			this->idx += 1;
			break;
		case 0xa6:
			printf("ANA\tM");
			this->idx += 1;
			break;
		case 0xa7:
			printf("ANA\tA");
			this->idx += 1;
			break;
		case 0xa8:
			printf("XRA\tB");
			this->idx += 1;
			break;
		case 0xa9:
			printf("XRA\tC");
			this->idx += 1;
			break;
		case 0xaa:
			printf("XRA\tD");
			this->idx += 1;
			break;
		case 0xab:
			printf("XRA\tE");
			this->idx += 1;
			break;
		case 0xac:
			printf("XRA\tH");
			this->idx += 1;
			break;
		case 0xad:
			printf("XRA\tL");
			this->idx += 1;
			break;
		case 0xae:
			printf("XRA\tM");
			this->idx += 1;
			break;
		case 0xaf:
			printf("XRA\tA");
			this->idx += 1;
			break;
		case 0xb0:
			printf("ORA\tB");
			this->idx += 1;
			break;
		case 0xb1:
			printf("ORA\tC");
			this->idx += 1;
			break;
		case 0xb2:
			printf("ORA\tD");
			this->idx += 1;
			break;
		case 0xb3:
			printf("ORA\tE");
			this->idx += 1;
			break;
		case 0xb4:
			printf("ORA\tH");
			this->idx += 1;
			break;
		case 0xb5:
			printf("ORA\tL");
			this->idx += 1;
			break;
		case 0xb6:
			printf("ORA\tM");
			this->idx += 1;
			break;
		case 0xb7:
			printf("ORA\tA");
			this->idx += 1;
			break;
		case 0xb8:
			printf("CMP\tB");
			this->idx += 1;
			break;
		case 0xb9:
			printf("CMP\tC");
			this->idx += 1;
			break;
		case 0xba:
			printf("CMP\tD");
			this->idx += 1;
			break;
		case 0xbb:
			printf("CMP\tE");
			this->idx += 1;
			break;
		case 0xbc:
			printf("CMP\tH");
			this->idx += 1;
			break;
		case 0xbd:
			printf("CMP\tL");
			this->idx += 1;
			break;
		case 0xbe:
			printf("CMP\tM");
			this->idx += 1;
			break;
		case 0xbf:
			printf("CMP\tA");
			this->idx += 1;
			break;
		case 0xc0:
			printf("RNZ");
			this->idx += 1;
			break;
		case 0xc1:
			printf("POP\tB");
			this->idx += 1;
			break;
		case 0xc2:
			printf("JNZ\t #%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xc3:
			printf("JMP\t #%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xc4:
			printf("CNZ\t #%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xc5:
			printf("PUSH\tB");
			this->idx += 1;
			break;
		case 0xc6:
			printf("ADI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xc7:
			printf("RST\t0");
			this->idx += 1;
			break;
		case 0xc8:
			printf("RZ");
			this->idx += 1;
			break;
		case 0xc9:
			printf("RET");
			this->idx += 1;
			break;
		case 0xca:
			printf("JZ\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xcb:
			printf("error");
			return -1;
			break;
		case 0xcc:
			printf("CZ\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xcd:
			printf("CALL\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xce:
			printf("ACI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xcf:
			printf("RST\t1");
			this->idx += 1;
			break;
		case 0xd0:
			printf("RNC");
			this->idx += 1;
			break;
		case 0xd1:
			printf("POP\tD");
			this->idx += 1;
			break;
		case 0xd2:
			printf("JNC\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xd3:
			printf("OUT\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xd4:
			printf("CNC\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xd5:
			printf("PUSH\tD");
			this->idx += 1;
			break;
		case 0xd6:
			printf("SUI\t #$%02x",opCode[1]);
			this->idx += 2;
			break;
		case 0xd7:
			printf("RST\t2");
			this->idx += 1;
			break;
		case 0xd8:
			printf("RC");
			this->idx += 1;
			break;
		case 0xd9:
			printf("error");
			return -1;
			break;
		case 0xda:
			printf("JC\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xdb:
			printf("IN\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xdc:
			printf("CC\t, $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xdd:
			printf("error");
			return -1;
			break;
		case 0xde:
			printf("SBI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xdf:
			printf("RST\t3");
			this->idx += 1;
			break;
		case 0xe0:
			printf("RPO");
			this->idx += 1;
			break;
		case 0xe1:
			printf("POP\tH");
			this->idx += 1;
			break;
		case 0xe2:
			printf("JPO\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xe3:
			printf("XTHL");
			this->idx += 1;
			break;
		case 0xe4:
			printf("CPO\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xe5:
			printf("PUSH\tH");
			this->idx += 1;
			break;
		case 0xe6:
			printf("ANI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xe7:
			printf("RST\t4");
			this->idx += 1;
			break;
		case 0xe8:
			printf("RPE");
			this->idx += 1;
			break;
		case 0xe9:
			printf("PCHL");
			this->idx += 1;
			break;
		case 0xea:
			printf("JPE\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xeb:
			printf("XCHG");
			this->idx += 1;
			break;
		case 0xec:
			printf("CPE\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xed:
			printf("error");
			return -1;
			break;
		case 0xee:
			printf("XRI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xef:
			printf("RST\t5");
			this->idx += 1;
			break;
		case 0xf0:
			printf("RP");
			this->idx += 1;
			break;
		case 0xf1:
			printf("POP\tPSW");
			this->idx += 1;
			break;
		case 0xf2:
			printf("JP\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xf3:
			printf("DI");
			this->idx += 1;
			break;
		case 0xf4:
			printf("CP\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xf5:
			printf("PUSH\tPSW");
			this->idx += 1;
			break;
		case 0xf6:
			printf("ORI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xf7:
			printf("RST\t6");
			this->idx += 1;
			break;
		case 0xf8:
			printf("RM");
			this->idx += 1;
			break;
		case 0xf9:
			printf("SPHL");
			this->idx += 1;
			break;
		case 0xfa:
			printf("JM\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xfb:
			printf("EI");
			this->idx += 1;
			break;
		case 0xfc:
			printf("CM\t $%02x%02x", opCode[2], opCode[1]);
			this->idx += 3;
			break;
		case 0xfd:
			printf("error");
			return -1;
			break;
		case 0xfe:
			printf("CPI\t #$%02x", opCode[1]);
			this->idx += 2;
			break;
		case 0xff:
			printf("RST\t7");
			this->idx += 1;
			break;
		}
		printf("\n");
	}
	return 0;
}
