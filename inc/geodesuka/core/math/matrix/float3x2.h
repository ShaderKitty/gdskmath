#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL3X2_H
#define GEODESUKA_CORE_MATH_REAL3X2_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"

#include "../vector/float2.h"
#include "../vector/float3.h"
#include "../vector/float4.h"

namespace geodesuka::core::math {

	//struct real3x2 {
	//	real a11, a21;
	//	real a12, a22;
	//	real a13, a23;
	//};

	union float3x2 {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		struct {
			real xx, xy;
			real yx, yy;
			real zx, zy;
		};
		// Row Vectors
		//struct {
		//	real2 x;
		//	real2 y;
		//	real2 z;
		//};
		//real3 vptr[2];
		real aptr[3][2];
#else
		// Column Major Memory Layout
		struct {
			real xx, yx, zx;
			real xy, yy, zy;
		};
		// Column Vectors
		//struct {
		//	real3 x, y;
		//};
		//real2 vptr[3];
		real aptr[3][2];
#endif // !COL_MAJOR_MEMORY_LAYOUT
		real ptr[2 * 3];

		float3x2() :
			xx(0.0), xy(0.0),
			yx(0.0), yy(0.0),
			zx(0.0), zy(0.0)
		{}
		float3x2(
			real XX, real XY,
			real YX, real YY,
			real ZX, real ZY
		) :
			xx(XX), xy(XY),
			yx(YX), yy(YY),
			zx(ZX), zy(ZY)
		{}
		~float3x2() {}

		// Access elements of matrix in standard notation.
		real operator()(int RowElement, int ColumnElement) const;
		real& operator()(int RowElement, int ColumnElement);

		// Basic Addition and Subtraction
		float3x2 operator-() const;
		float3x2 operator+(const float3x2& Rhs) const;
		float3x2 operator-(const float3x2& Rhs) const;

		float3x2& operator+=(const float3x2& Rhs);
		float3x2& operator-=(const float3x2& Rhs);

		// Multiply column vector
		float3 operator*(const float2& Rhs) const;

		// Scalar Multiplication
		float3x2 operator*(real Rhs) const;
		float3x2 operator/(real Rhs) const;

		void setr(const float2& Row1, const float2& Row2, const float2& Row3);
		void setc(const float3& Col1, const float3& Col2);

	};

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real3x2& Arg);
#endif // MATH_ENABLE_IO

}

#endif // !GEODESUKA_CORE_MATH_REAL3X2_H

