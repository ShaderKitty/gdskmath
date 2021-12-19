#include <iostream>
#include <string>

#include <geodesuka/core/math.h>

using namespace geodesuka::core;

int main(int argc, char* argv[]) {
	//ubyte ua = 0x00;
	//ushort ub = 23;
	//uint uc = 69u;

	//byte a = 0x00;
	//short b = 23;
	//int c = 69;

	math::real3 a(1.0, 0.0, 1.0);
	float3 b(0.0, 2.0, 3.0);

	float3 c = a + b;
	
	//uint4 a(1), b(2);
	//uint4 c(0);
	//c = uint4(0, 0, 1, 0) + uint4(0, 0, 0, 0);

	return 0;
}

