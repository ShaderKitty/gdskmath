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

	uint2() : x(0u), y(0u) {}
	uint2(uint A) : x(A), y(A) {}
	uint2(uint X, uint Y) : x(X), y(Y) {}

	// Vector Space Stuff.
	uint2& operator=(uint aRhs);
	uint2& operator=(const uint2& aRhs);
	uint2& operator=(uint2&& aRhs);

	// Access
	uint	operator[](int aIndex) const;
	uint&	operator[](int aIndex);

	// Vector addition and subtraction.
	uint2	operator-() const;
	uint2	operator+(uint aRhs) const;
	uint2	operator+(uint2 aRhs) const;
	uint2	operator-(uint aRhs) const;
	uint2	operator-(uint2 aRhs) const;
	uint2&	operator+=(uint aRhs);
	uint2&	operator+=(uint2 aRhs);
	uint2&	operator-=(uint aRhs);
	uint2&	operator-=(uint2 aRhs);

	// Scalar multiplication & division.
	uint2	operator*(uint aRhs) const;
	uint2	operator/(uint aRhs) const;
	uint2&	operator*=(uint aRhs);
	uint2&	operator/=(uint aRhs);


	// Dot Product
	uint	operator*(uint2 aRhs) const;
	// Cross Product
	uint2	operator^(uint2 aRhs) const;

};

uint2 operator+(uint aLhs, uint2 aRhs);
uint2 operator-(uint aLhs, uint2 aRhs);
uint2 operator*(uint aLhs, uint2 aRhs);

#endif // !GEODESUKA_CORE_MATH_UINT2_H
