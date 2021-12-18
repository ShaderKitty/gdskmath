#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL2X2_H
#define GEODESUKA_CORE_MATH_REAL2X2_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"
#include "../vector/float2.h"
#include "../vector/float3.h"
#include "../vector/float4.h"

	union float2x2 {
		static const float2x2 I;

#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		struct {
			real xx, xy;
			real yx, yy;
		};
#endif

#ifdef COL_MAJOR_MEMORY_LAYOUT
		// Column Major Memory Layout
		struct {
			real xx, yx;
			real xy, yy;
		};
#endif
		//struct {
		//	real2 x;
		//	real2 y;
		//};
		//real2 vptr[2];
		real aptr[2][2];
		real ptr[2 * 2];


		float2x2() :
			xx(0.0), xy(0.0),
			yx(0.0), yy(0.0)
		{}
		float2x2(
			real XX, real XY,
			real YX, real YY
		) :
			xx(XX), xy(XY),
			yx(YX), yy(YY)
		{}
		~float2x2() {}

		// Access elements of matrix in standard notation.
		real operator()(integer RowElement, integer ColumnElement) const;
		real& operator()(integer RowElement, integer ColumnElement);

		float2x2 operator-() const;
		float2x2 operator+(const float2x2& Rhs) const;
		float2x2 operator-(const float2x2& Rhs) const;
		float2x2 operator*(const float2x2& Rhs) const;

		float2x2 operator+=(const float2x2& Rhs);
		float2x2 operator-=(const float2x2& Rhs);
		float2x2 operator*=(const float2x2& Rhs);

		float2 operator*(const float2& Rhs) const;
		float2x2 operator*(real Rhs) const;
		float2x2 operator/(real Rhs) const;

		//real sub(integer RowElement, integer ColumnElement) const;
		void setr(const float2& Row1, const float2& Row2);
		void setc(const float2& Col1, const float2& Col2);

	};

	float2 operator*(const float2& Lhs, const float2x2& Rhs);
	float2x2 operator*(real Lhs, const float2x2& Rhs);

	real det(const float2x2& Arg);
	real tr(const float2x2& Arg);
	float2x2 transpose(const float2x2& Arg);
	float2x2 inverse(const float2x2& Arg);

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real2x2& Arg);
#endif // MATH_ENABLE_IO


#endif // !GEODESUKA_CORE_MATH_REAL2X2_H

