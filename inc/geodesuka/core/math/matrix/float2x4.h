#pragma once
#ifndef GEODESUKA_CORE_MATH_REAL2X4_H
#define GEODESUKA_CORE_MATH_REAL2X4_H

#include "../config.h"

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include "../number/type.h"

#include "../vector/float2.h"
#include "../vector/float3.h"
#include "../vector/float4.h"

//struct real2x4 {
//	real a11, a21, a31, a41;
//	real a12, a22, a32, a42;
//};

union float2x4 {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
	// Row Major Memory Layout
	struct {
		real xx, xy, xz, xt;
		real yx, yy, yz, yt;
	};
	// Row Vectors
	//struct {
	//	real4 x;
	//	real4 y;
	//};
	//real3 vptr[2];
	real aptr[2][4];
#else
	// Column Major Memory Layout
	struct {
		real xx, yx;
		real xy, yy;
		real xz, yz;
		real xt, yt;
	};
	// Column Vectors
	//struct {
	//	real2 x, y, z, t;
	//};
	//real2 vptr[4];
	real aptr[4][2];
#endif // !COL_MAJOR_MEMORY_LAYOUT
	real ptr[2 * 4];

	float2x4() :
		xx(0.0), xy(0.0), xz(0.0), xt(0.0),
		yx(0.0), yy(0.0), yz(0.0), yt(0.0)
	{}
	float2x4(
		real XX, real XY, real XZ, real XT,
		real YX, real YY, real YZ, real YT
	) :
		xx(XX), xy(XY), xz(XZ), xt(XT),
		yx(YX), yy(YY), yz(YZ), yt(YT)
	{}
	~float2x4() {}

	// Access elements of matrix in standard notation.
	real operator()(int RowElement, int ColumnElement) const;
	real& operator()(int RowElement, int ColumnElement);

	// Basic Addition and Subtraction
	float2x4 operator-() const;
	float2x4 operator+(const float2x4& Rhs) const;
	float2x4 operator-(const float2x4& Rhs) const;

	float2x4& operator+=(const float2x4& Rhs);
	float2x4& operator-=(const float2x4& Rhs);

	// Multiply column vector
	float2 operator*(const float4& Rhs) const;

	// Scalar Multiplication
	float2x4 operator*(real Rhs) const;
	float2x4 operator/(real Rhs) const;

	void setr(const float4& Row1, const float4& Row2);
	void setc(const float2& Col1, const float2& Col2, const float2& Col3, const float2& Col4);

};

#ifdef MATH_ENABLE_IO
std::ostream& operator<<(std::ostream& Out, const real2x4& Arg);
#endif // MATH_ENABLE_IO


#endif // !GEODESUKA_CORE_MATH_REAL2X4_H

