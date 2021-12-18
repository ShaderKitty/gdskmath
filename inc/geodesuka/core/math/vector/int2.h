#pragma once
#ifndef GEODESUKA_CORE_MATH_INT2_H
#define GEODESUKA_CORE_MATH_INT2_H

#include "../config.h"

#include "../number/type.h"


	union int2 {
		struct {
			int x, y;
		};
		struct {
			int a, b;
		};
		int ptr[2];

		int2();
		~int2();

#ifdef CS_PLEB_NOTATION
		int2(int Arg);
#endif // CS_PLEB_NOTATION
		int2(int ArgX, int ArgY);
		int2(const int2& Arg);

#ifdef CS_PLEB_NOTATION
		int2& operator=(int Rhs);
#endif // CS_PLEB_NOTATION
		int2& operator=(const int2& Rhs);

		int operator[](int Index) const;
		int& operator[](int Index);

		int2 operator-() const;
		int2 operator+(const int2& Rhs) const;
		int2 operator-(const int2& Rhs) const;
		int operator*(const int2& Rhs) const;
		int operator^(const int2& Rhs) const;

		int2& operator+=(const int2& Rhs);
		int2& operator-=(const int2& Rhs);

#ifdef CS_PLEB_NOTATION
		int2 operator+(int Rhs) const;
		int2 operator-(int Rhs) const;
#endif // CS_PLEB_NOTATION
		int2 operator*(int Rhs) const;
		int2 operator/(int Rhs) const;

#ifdef CS_PLEB_NOTATION
		int2& operator+=(int Rhs);
		int2& operator-=(int Rhs);
#endif // CS_PLEB_NOTATION
		int2& operator*=(int Rhs);
		int2& operator/=(int Rhs);

	};

#ifdef CS_PLEB_NOTATION
	int2 operator+(int Lhs, const int2& Rhs);
	int2 operator-(int Lhs, const int2& Rhs);
#endif // CS_PLEB_NOTATION
	int2 operator*(int Lhs, const int2& Rhs);
#ifdef CS_PLEB_NOTATION
	int2 operator/(int Lhs, const int2& Rhs);
#endif // CS_PLEB_NOTATION

#endif // !GEODESUKA_CORE_MATH_INT2_H
