#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL3X4_H
#define GEODESUKA_CORE_MATH_REAL3X4_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"

#include "../vector/float2.h"
#include "../vector/float3.h"
#include "../vector/float4.h"

namespace geodesuka::core::math {

	union float3x4 {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		struct {
			real xx, xy, xz, xt;
			real yx, yy, yz, yt;
			real zx, zy, zz, zt;
		};
		//struct {
		//	real4 x, y, z;
		//};
		//real4 vptr[3];
		real aptr[3][4];
#else
		// Column Major Memory Layout
		struct {
			real xx, yx, zx;
			real xy, yy, zy;
			real xz, yz, zz;
			real xt, yt, zt;
		};
		//struct {
		//	real3 x, y, z, t;
		//};
		//real3 vptr[4];
		real aptr[4][3];
#endif // !COL_MAJOR_MEMORY_LAYOUT
		real ptr[3 * 4];

		float3x4() :
			xx(0.0), xy(0.0), xz(0.0), xt(0.0),
			yx(0.0), yy(0.0), yz(0.0), yt(0.0),
			zx(0.0), zy(0.0), zz(0.0), zt(0.0)
		{}
		float3x4(
			real XX, real XY, real XZ, real XT,
			real YX, real YY, real YZ, real YT,
			real ZX, real ZY, real ZZ, real ZT
		) :
			xx(XX), xy(XY), xz(XZ), xt(XT),
			yx(YX), yy(YY), yz(YZ), yt(YT),
			zx(ZX), zy(ZY), zz(ZZ), zt(ZT)
		{}
		~float3x4() {}

		// Access elements of matrix in standard notation.
		real operator()(int RowElement, int ColumnElement) const;
		real& operator()(int RowElement, int ColumnElement);

		// Basic Addition and Subtraction
		float3x4 operator-() const;
		float3x4 operator+(const float3x4& Rhs) const;
		float3x4 operator-(const float3x4& Rhs) const;

		float3x4& operator+=(const float3x4& Rhs);
		float3x4& operator-=(const float3x4& Rhs);

		// Multiply column vector
		float3 operator*(const float4& Rhs) const;

		// Scalar Multiplication
		float3x4 operator*(real Rhs) const;
		float3x4 operator/(real Rhs) const;

		// Set Rows/Columns using respective vectors
		void setr(const float4& Row1, const float4& Row2, const float4& Row3);
		void setc(const float3& Col1, const float3& Col2, const float3& Col3, const float3& Col4);

	};

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real3x4& Arg);
#endif // MATH_ENABLE_IO

}

#endif // !GEODESUKA_CORE_MATH_REAL3X4_H
