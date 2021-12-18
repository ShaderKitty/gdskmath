#pragma once
#ifndef GEODESUKA_CORE_MATH_UINT2_H
#define GEODESUKA_CORE_MATH_UINT2_H

#include "../config.h"

#include "../number/type.h"

union uint2 {
	struct {
		uint x, y;
	};
	struct {
		uint r, g;
	};
	uint ptr[2];



};

#endif // !GEODESUKA_CORE_MATH_UINT2_H
