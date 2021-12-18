#pragma once
#ifndef GEODESUKA_CORE_MATH_UINT3_H
#define GEODESUKA_CORE_MATH_UINT3_H

#include "../config.h"

#include "../number/type.h"

union uint3 {
	struct {
		uint x, y, z;
	};
	struct {
		uint r, g, b;
	};
	uint ptr[3];

	uint3() : x(0u), y(0u), z(0u) {}
	uint3(uint A) : x(A), y(A), z(A) {}
	uint3(uint X, uint Y, uint Z) : x(X), y(Y), z(Z) {}
	
	// Vector Space Stuff.
	uint3&	operator=(uint aRhs);
	uint3&	operator=(const uint3& aRhs);
	uint3&	operator=(uint3&& aRhs);

	// Access
	uint	operator[](int aIndex) const;
	uint&	operator[](int aIndex);

	// Vector addition and subtraction.
	uint3	operator-() const;
	uint3	operator+(uint aRhs) const;
	uint3	operator+(uint3 aRhs) const;
	uint3	operator-(uint aRhs) const;
	uint3	operator-(uint3 aRhs) const;
	uint3&	operator+=(uint aRhs);
	uint3&	operator+=(uint3 aRhs);
	uint3&	operator-=(uint aRhs);
	uint3&	operator-=(uint3 aRhs);

	// Scalar multiplication & division.
	uint3	operator*(uint aRhs) const;
	uint3	operator/(uint aRhs) const;
	uint3&	operator*=(uint aRhs);
	uint3&	operator/=(uint aRhs);


	// Dot Product
	uint	operator*(uint3 aRhs) const;
	// Cross Product
	uint3	operator^(uint3 aRhs) const;

};

uint3 operator+(uint aLhs, uint3 aRhs);
uint3 operator-(uint aLhs, uint3 aRhs);
uint3 operator*(uint aLhs, uint3 aRhs);

#endif // !GEODESUKA_CORE_MATH_UINT3_H
