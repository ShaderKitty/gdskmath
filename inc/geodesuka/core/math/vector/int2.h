#pragma once
#ifndef GEODESUKA_CORE_MATH_INTEGER2_H
#define GEODESUKA_CORE_MATH_INTEGER2_H

#include "../config.h"

#include "../number/type.h"


	union int2 {
		struct {
			integer x, y;
		};
		struct {
			integer a, b;
		};
		integer ptr[2];

		int2();
		~int2();

#ifdef CS_PLEB_NOTATION
		integer2(integer Arg);
#endif // CS_PLEB_NOTATION
		int2(integer ArgX, integer ArgY);
		int2(const int2& Arg);

#ifdef CS_PLEB_NOTATION
		integer2& operator=(integer Rhs);
#endif // CS_PLEB_NOTATION
		int2& operator=(const int2& Rhs);

		integer operator[](integer Index) const;
		integer& operator[](integer Index);

		int2 operator-() const;
		int2 operator+(const int2& Rhs) const;
		int2 operator-(const int2& Rhs) const;
		integer operator*(const int2& Rhs) const;
		integer operator^(const int2& Rhs) const;

		int2& operator+=(const int2& Rhs);
		int2& operator-=(const int2& Rhs);

#ifdef CS_PLEB_NOTATION
		integer2 operator+(integer Rhs) const;
		integer2 operator-(integer Rhs) const;
#endif // CS_PLEB_NOTATION
		int2 operator*(integer Rhs) const;
		int2 operator/(integer Rhs) const;

#ifdef CS_PLEB_NOTATION
		integer2& operator+=(integer Rhs);
		integer2& operator-=(integer Rhs);
#endif // CS_PLEB_NOTATION
		int2& operator*=(integer Rhs);
		int2& operator/=(integer Rhs);

	};

#ifdef CS_PLEB_NOTATION
	integer2 operator+(integer Lhs, const integer2& Rhs);
	integer2 operator-(integer Lhs, const integer2& Rhs);
#endif // CS_PLEB_NOTATION
	int2 operator*(integer Lhs, const int2& Rhs);
#ifdef CS_PLEB_NOTATION
	integer2 operator/(integer Lhs, const integer2& Rhs);
#endif // CS_PLEB_NOTATION

#endif // !GEODESUKA_CORE_MATH_INTEGER2_H
