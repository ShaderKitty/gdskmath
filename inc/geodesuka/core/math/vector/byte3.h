#pragma once
#ifndef GEODESUKA_CORE_MATH_BYTE3_H
#define GEODESUKA_CORE_MATH_BYTE3_H

#include "../config.h"

#include "../number/type.h"

union ubyte3 {
	struct {
		ubyte x, y, z;
	};
	struct {
		ubyte r, g, b;
	};
	ubyte ptr[3];



};

#endif // !GEODESUKA_CORE_MATH_UBYTE3_H
