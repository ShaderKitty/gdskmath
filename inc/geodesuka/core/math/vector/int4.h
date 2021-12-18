#pragma once
#ifndef GEODESUKA_CORE_MATH_INT4_H
#define GEODESUKA_CORE_MATH_INT4_H

#include "../config.h"

namespace geodesuka::core::math {

	union int4 {
		struct {
			int x, y, z, t;
		};
		struct {
			int r, g, b, a;
		};
		int ptr[4];

		int4();
		~int4();

#ifdef CS_PLEB_NOTATION
		int4(int Arg);
#endif // CS_PLEB_NOTATION
		int4(int ArgX, int ArgY, int ArgZ, int ArgT);
		int4(const int4& Arg);

#ifdef CS_PLEB_NOTATION
		int4& operator=(int Rhs);
#endif // CS_PLEB_NOTATION
		int4& operator=(const int4& Rhs);

		int operator[](int Index) const;
		int& operator[](int Index);

		int4 operator-() const;
		int4 operator+(const int4& Rhs) const;
		int4 operator-(const int4& Rhs) const;
		int operator*(const int4& Rhs) const;

		int4& operator+=(const int4& Rhs);
		int4& operator-=(const int4& Rhs);

#ifdef CS_PLEB_NOTATION
		int4 operator+(int Rhs) const;
		int4 operator-(int Rhs) const;
#endif // CS_PLEB_NOTATION
		int4 operator*(int Rhs) const;
		int4 operator/(int Rhs) const;

#ifdef CS_PLEB_NOTATION
		int4& operator+=(int Rhs);
		int4& operator-=(int Rhs);
#endif // CS_PLEB_NOTATION
		int4& operator*=(int Rhs);
		int4& operator/=(int Rhs);

	};

#ifdef CS_PLEB_NOTATION
	int4 operator+(int Lhs, const int4& Rhs);
	int4 operator-(int Lhs, const int4& Rhs);
#endif // CS_PLEB_NOTATION
	int4 operator*(int Lhs, const int4& Rhs);
#ifdef CS_PLEB_NOTATION
	int4 operator/(int Lhs, const int4& Rhs);
#endif // CS_PLEB_NOTATION

}

#endif // !GEODESUKA_CORE_MATH_INT4_H
