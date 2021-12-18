#pragma once
#ifndef GEODESUKA_CORE_MATH_FLOAT3_H
#define GEODESUKA_CORE_MATH_FLOAT3_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"


union float3 {
	struct {
		real x, y, z;
	};
	struct {
		real r, g, b;
	};
	real ptr[3];

	float3();
	~float3();

#ifdef CS_PLEB_NOTATION
	real3(real Val);
#endif // CS_PLEB_NOTATION
	float3(real ValX, real ValY, real ValZ);
	float3(const float3& Val);
	//real3(real3&& RR);

#ifdef CS_PLEB_NOTATION
	real3& operator=(real Rhs);
#endif // CS_PLEB_NOTATION
	//real3& operator=(real X, real Y, real Z);
	float3& operator=(const float3& Rhs);
	//real3& operator=(real3&& Rhs);

	real operator[](integer Index) const;
	real& operator[](integer Index);

	float3 operator-() const;
	float3 operator+(const float3& Rhs) const;
	float3 operator-(const float3& Rhs) const;
	real operator*(const float3& Rhs) const;
	float3 operator^(const float3& Rhs) const;

	float3& operator+=(const float3& Rhs);
	float3& operator-=(const float3& Rhs);
	float3& operator^=(const float3& Rhs);

#ifdef CS_PLEB_NOTATION
	real3 operator+(real Rhs) const; /* Technically not legal, but useful */
	real3 operator-(real Rhs) const; /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
	float3 operator*(real Rhs) const;
	float3 operator/(real Rhs) const;

#ifdef CS_PLEB_NOTATION
	real3& operator+=(real Rhs); /* Technically not legal, but useful */
	real3& operator-=(real Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
	float3& operator*=(real Rhs);
	float3& operator/=(real Rhs);

};

#ifdef CS_PLEB_NOTATION
real3 operator+(real Lhs, const real3& Rhs); /* Technically not legal, but useful */
real3 operator-(real Lhs, const real3& Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
float3 operator*(real Lhs, const float3& Rhs);
#ifdef CS_PLEB_NOTATION
real3 operator/(real Lhs, const real3& Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION

real length(const float3& Arg);
float3 normalize(const float3& Arg);

#ifdef MATH_ENABLE_IO
std::ostream& operator<<(std::ostream& os, const real3& v);
#endif // MATH_ENABLE_IO

#endif // !GEODESUKA_CORE_MATH_FLOAT3_H
