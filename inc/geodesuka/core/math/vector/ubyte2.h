#pragma once
#ifndef GEODESUKA_CORE_MATH_UBYTE2_H
#define GEODESUKA_CORE_MATH_UBYTE2_H

#include "../config.h"

#include "../number/type.h"

union ubyte2 {
	struct {
		ubyte x, y, z, t;
	};
	struct {
		ubyte r, g, b, a;
	};
	ubyte ptr[4];

	ubyte2() : x(0u), y(0u), z(0u), t(0u) {}
	ubyte2(ubyte A) : x(A), y(A), z(A), t(A) {}
	ubyte2(ubyte X, ubyte Y, ubyte Z, ubyte T) : x(X), y(Y), z(Z), t(T) {}

	// Vector Space Stuff.
	ubyte2& operator=(ubyte aRhs);
	ubyte2& operator=(const ubyte2& aRhs);
	ubyte2& operator=(ubyte2&& aRhs) noexcept;

	// Access
	ubyte	operator[](int aIndex) const;
	ubyte& operator[](int aIndex);

	// Vector addition and subtraction.
	//ubyte2	operator-() const;
	ubyte2	operator+(ubyte aRhs) const;
	ubyte2	operator+(const ubyte2& aRhs) const;
	ubyte2	operator-(ubyte aRhs) const;
	ubyte2	operator-(const ubyte2& aRhs) const;
	ubyte2& operator+=(ubyte aRhs);
	ubyte2& operator+=(const ubyte2& aRhs);
	ubyte2& operator-=(ubyte aRhs);
	ubyte2& operator-=(const ubyte2& aRhs);

	// Scalar multiplication & division.
	ubyte2	operator*(ubyte aRhs) const;
	ubyte2	operator/(ubyte aRhs) const;
	ubyte2& operator*=(ubyte aRhs);
	ubyte2& operator/=(ubyte aRhs);


	// Dot Product
	ubyte operator*(const ubyte2& aRhs) const;
	// Cross Product (Only exists in 3D)
	//ubyte2	operator^(const ubyte2& aRhs) const;

};

ubyte2 operator+(ubyte aLhs, const ubyte2& aRhs);
ubyte2 operator-(ubyte aLhs, const ubyte2& aRhs);
ubyte2 operator*(ubyte aLhs, const ubyte2& aRhs);

#endif // !GEODESUKA_CORE_MATH_UBYTE2_H
