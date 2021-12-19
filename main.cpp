#include <iostream>
#include <string>

#include <geodesuka/core/math.h>

int main(int argc, char* argv[]) {
	//ubyte ua = 0x00;
	//ushort ub = 23;
	//uint uc = 69u;

	//byte a = 0x00;
	//short b = 23;
	//int c = 69;

	uint4 a(1), b(2);
	uint4 c(0);
	c = uint4(0, 0, 1, 0) + uint4(0, 0, 0, 0);
	return 0;
}

