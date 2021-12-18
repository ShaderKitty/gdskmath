#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL2_H
#define GEODESUKA_CORE_MATH_REAL2_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"

namespace geodesuka::core::math {

	union float2 {
		struct {
			real x, y;
		};
		struct {
			real a, b;
		};
		real ptr[2];

		float2();
		~float2();

#ifdef CS_PLEB_NOTATION
		real2(real Val); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
		float2(real ValX, real ValY);
		float2(const float2& Val);

#ifdef CS_PLEB_NOTATION
		real2& operator=(real Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
		float2& operator=(const float2& Rhs);

		real operator[](integer Index) const;
		real& operator[](integer Index);

		float2 operator-() const;
		float2 operator+(const float2& Rhs) const;
		float2 operator-(const float2& Rhs) const;
		real operator*(const float2& Rhs) const;
		real operator^(const float2& Rhs) const;

		float2& operator+=(const float2& Rhs);
		float2& operator-=(const float2& Rhs);

#ifdef CS_PLEB_NOTATION
		real2 operator+(real Rhs) const; /* Technically not legal, but useful */
		real2 operator-(real Rhs) const; /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
		float2 operator*(real Rhs) const;
		float2 operator/(real Rhs) const;

#ifdef CS_PLEB_NOTATION
		real2& operator+=(real Rhs); /* Technically not legal, but useful */
		real2& operator-=(real Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
		float2& operator*=(real Rhs);
		float2& operator/=(real Rhs);

	};

#ifdef CS_PLEB_NOTATION
	real2 operator+(real Lhs, const real2& Rhs); /* Technically not legal, but useful */
	real2 operator-(real Lhs, const real2& Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION
	float2 operator*(real Lhs, const float2& Rhs);
#ifdef CS_PLEB_NOTATION
	real2 operator/(real Lhs, const real2& Rhs); /* Technically not legal, but useful */
#endif // CS_PLEB_NOTATION

	real length(const float2& Arg);
	float2 normalize(const float2& Arg);

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& os, const real2& v);
#endif // MATH_ENABLE_IO

}

#endif // !GEODESUKA_CORE_MATH_REAL2_H
