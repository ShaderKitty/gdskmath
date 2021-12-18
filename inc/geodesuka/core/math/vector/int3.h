#pragma once
#ifndef GEODESUKA_CORE_MATH_INTEGER3_H
#define GEODESUKA_CORE_MATH_INTEGER3_H

#include "../config.h"

#include "../number/type.h"

//struct integer3 {
//	integer x, y, z;
//};

namespace geodesuka::core::math {

	union int3 {
		struct {
			integer x, y, z;
		};
		struct {
			integer r, g, b;
		};
		integer ptr[3];

		int3();
		~int3();

#ifdef CS_PLEB_NOTATION
		integer3(integer Arg);
#endif // CS_PLEB_NOTATION
		int3(integer ArgX, integer ArgY, integer ArgZ);
		int3(const int3& Arg);

#ifdef CS_PLEB_NOTATION
		integer3& operator=(integer Rhs);
#endif // CS_PLEB_NOTATION
		int3& operator=(const int3& Rhs);

		integer operator[](integer Index) const;
		integer& operator[](integer Index);

		int3 operator-() const;
		int3 operator+(const int3& Rhs) const;
		int3 operator-(const int3& Rhs) const;
		integer operator*(const int3& Rhs) const;
		int3 operator^(const int3& Rhs) const;

		int3& operator+=(const int3& Rhs);
		int3& operator-=(const int3& Rhs);
		int3& operator^=(const int3& Rhs);

#ifdef CS_PLEB_NOTATION
		integer3 operator+(integer Rhs) const;
		integer3 operator-(integer Rhs) const;
#endif // CS_PLEB_NOTATION
		int3 operator*(integer Rhs) const;
		int3 operator/(integer Rhs) const;

#ifdef CS_PLEB_NOTATION
		integer3& operator+=(integer Rhs);
		integer3& operator-=(integer Rhs);
#endif // CS_PLEB_NOTATION
		int3& operator*=(integer Rhs);
		int3& operator/=(integer Rhs);

	};

#ifdef CS_PLEB_NOTATION
	integer3 operator+(integer Lhs, const integer3& Rhs);
	integer3 operator-(integer Lhs, const integer3& Rhs);
#endif // CS_PLEB_NOTATION
	int3 operator*(integer Lhs, const int3& Rhs);
#ifdef CS_PLEB_NOTATION
	integer3 operator/(integer Lhs, const integer3& Rhs);
#endif // CS_PLEB_NOTATION

}

#endif // !GEODESUKA_CORE_MATH_INTEGER3_H