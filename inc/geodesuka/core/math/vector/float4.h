#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL4_H
#define GEODESUKA_CORE_MATH_REAL4_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"

union float4 {
	struct {
		real x, y, z, t;
	};
	struct {
		real r, g, b, a;
	};
	real ptr[4];

	float4();
	~float4();

#ifdef CS_PLEB_NOTATION
	real4(real Val);
#endif // CS_PLEB_NOTATION
	float4(real ValX, real ValY, real ValZ, real ValT);
	float4(const float4& Val);

#ifdef CS_PLEB_NOTATION
	real4& operator=(real Rhs);
#endif // CS_PLEB_NOTATION
	float4& operator=(const float4& Rhs);

	real operator[](integer Index) const;
	real& operator[](integer Index);

	float4 operator-() const;
	float4 operator+(const float4& Rhs) const;
	float4 operator-(const float4& Rhs) const;
	real operator*(const float4& Rhs) const;

	float4& operator+=(const float4& Rhs);
	float4& operator-=(const float4& Rhs);

#ifdef CS_PLEB_NOTATION
	real4 operator+(real Rhs) const;
	real4 operator-(real Rhs) const;
#endif // CS_PLEB_NOTATION
	float4 operator*(real Rhs) const;
	float4 operator/(real Rhs) const;

#ifdef CS_PLEB_NOTATION
	real4& operator+=(real Rhs);
	real4& operator-=(real Rhs);
#endif // CS_PLEB_NOTATION
	float4& operator*=(real Rhs);
	float4& operator/=(real Rhs);

};

#ifdef CS_PLEB_NOTATION
real4 operator+(real Lhs, const real4& Rhs);
real4 operator-(real Lhs, const real4& Rhs);
#endif // CS_PLEB_NOTATION
float4 operator*(real Lhs, const float4& Rhs);
#ifdef CS_PLEB_NOTATION
real4 operator/(real Lhs, const real4& Rhs);
#endif // CS_PLEB_NOTATION

real length(const float4& Arg);
float4 normalize(const float4& Arg);

#ifdef MATH_ENABLE_IO
std::ostream& operator<<(std::ostream& os, const real4& v);
#endif // MATH_ENABLE_IO

#endif // !GEODESUKA_CORE_MATH_REAL4_H
