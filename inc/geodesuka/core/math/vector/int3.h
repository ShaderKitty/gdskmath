#pragma once
#ifndef GEODESUKA_CORE_MATH_INT3_H
#define GEODESUKA_CORE_MATH_INT3_H

#include "../config.h"

#include "../number/type.h"

//struct int3 {
//	int x, y, z;
//};

union int3 {
	struct {
		int x, y, z;
	};
	struct {
		int r, g, b;
	};
	int ptr[3];

	int3();
	~int3();

#ifdef CS_PLEB_NOTATION
	int3(int Arg);
#endif // CS_PLEB_NOTATION
	int3(int ArgX, int ArgY, int ArgZ);
	int3(const int3& Arg);

#ifdef CS_PLEB_NOTATION
	int3& operator=(int Rhs);
#endif // CS_PLEB_NOTATION
	int3& operator=(const int3& Rhs);

	int operator[](int Index) const;
	int& operator[](int Index);

	int3 operator-() const;
	int3 operator+(const int3& Rhs) const;
	int3 operator-(const int3& Rhs) const;
	int operator*(const int3& Rhs) const;
	int3 operator^(const int3& Rhs) const;

	int3& operator+=(const int3& Rhs);
	int3& operator-=(const int3& Rhs);
	int3& operator^=(const int3& Rhs);

#ifdef CS_PLEB_NOTATION
	int3 operator+(int Rhs) const;
	int3 operator-(int Rhs) const;
#endif // CS_PLEB_NOTATION
	int3 operator*(int Rhs) const;
	int3 operator/(int Rhs) const;

#ifdef CS_PLEB_NOTATION
	int3& operator+=(int Rhs);
	int3& operator-=(int Rhs);
#endif // CS_PLEB_NOTATION
	int3& operator*=(int Rhs);
	int3& operator/=(int Rhs);

};

#ifdef CS_PLEB_NOTATION
int3 operator+(int Lhs, const int3& Rhs);
int3 operator-(int Lhs, const int3& Rhs);
#endif // CS_PLEB_NOTATION
int3 operator*(int Lhs, const int3& Rhs);
#ifdef CS_PLEB_NOTATION
int3 operator/(int Lhs, const int3& Rhs);
#endif // CS_PLEB_NOTATION

#endif // !GEODESUKA_CORE_MATH_INT3_H