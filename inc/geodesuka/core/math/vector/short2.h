#pragma once
#ifndef GEODESUKA_CORE_MATH_UBYTE2_H
#define GEODESUKA_CORE_MATH_UBYTE2_H

#include "../config.h"

#include "../number/type.h"

union ubyte2 {
	struct {
		ubyte x, y;
	};
	struct {
		ubyte r, g;
	};
	ubyte ptr[2];



};


#endif // !GEODESUKA_CORE_MATH_UBYTE2_H
