#include <geodesuka/core/math/vector/float2.h>

//// Standard C Libraries
////#include <assert.h>
//#include <stdint.h>
//#include <float.h>
//#include <limits.h>
//#include <math.h>

#include <cmath>

#include <geodesuka/core/math/config.h>

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

#include <geodesuka/core/math/number/type.h>

namespace geodesuka::core::math {

	float2::float2() {
		this->x = 0.0; this->y = 0.0;
	}

	float2::~float2() {}
#ifdef CS_PLEB_NOTATION
	real2::real2(real Val) {
		this->x = Val; this->y = Val;
	}
#endif // CS_PLEB_NOTATION
	float2::float2(real ValX, real ValY) {
		this->x = ValX; this->y = ValY;
	}

	float2::float2(const float2& Val) {
		this->x = Val.x; this->y = Val.y;
	}
#ifdef CS_PLEB_NOTATION
	real2& real2::operator=(real Rhs) {
		this->x = Rhs; this->y = Rhs;
		return *this;
	}
#endif // CS_PLEB_NOTATION
	float2& float2::operator=(const float2& Rhs) {
		this->x = Rhs.x; this->y = Rhs.y;
		return *this;
	}

	real float2::operator[](integer Index) const {
		return this->ptr[Index];
	}

	real& float2::operator[](integer Index) {
		return this->ptr[Index];
	}

	float2 float2::operator-() const {
		return float2(-this->x, -this->y);
	}

	float2 float2::operator+(const float2& Rhs) const {
		return float2(this->x + Rhs.x, this->y + Rhs.y);
	}

	float2 float2::operator-(const float2& Rhs) const {
		return float2(this->x - Rhs.x, this->y - Rhs.y);
	}

	real float2::operator*(const float2& Rhs) const {
		return (this->x * Rhs.x + this->y * Rhs.y);
	}

	real float2::operator^(const float2& Rhs) const {
		return (this->x * Rhs.y - this->y * Rhs.x);
	}
	float2& float2::operator+=(const float2& Rhs) {
		*this = *this + Rhs;
		return *this;
	}
	float2& float2::operator-=(const float2& Rhs) {
		*this = *this - Rhs;
		return *this;
	}
#ifdef CS_PLEB_NOTATION
	real2 real2::operator+(real Rhs) const {
		return real2(this->x + Rhs, this->y + Rhs);
	}

	real2 real2::operator-(real Rhs) const {
		return real2(this->x - Rhs, this->y - Rhs);
	}
#endif // CS_PLEB_NOTATION
	float2 float2::operator*(real Rhs) const {
		return float2(this->x * Rhs, this->y * Rhs);
	}

	float2 float2::operator/(real Rhs) const {
		return float2(this->x / Rhs, this->y / Rhs);
	}
#ifdef CS_PLEB_NOTATION
	real2& real2::operator+=(real Rhs) {
		*this = *this + Rhs;
		return *this;
	}

	real2& real2::operator-=(real Rhs) {
		*this = *this - Rhs;
		return *this;
	}
#endif // CS_PLEB_NOTATION
	float2& float2::operator*=(real Rhs) {
		*this = *this * Rhs;
		return *this;
	}

	float2& float2::operator/=(real Rhs) {
		*this = *this / Rhs;
		return *this;
	}

#ifdef CS_PLEB_NOTATION
	real2 operator+(real Lhs, const real2& Rhs) {
		return real2(Lhs + Rhs.x, Lhs + Rhs.y);
	}

	real2 operator-(real Lhs, const real2& Rhs) {
		return real2(Lhs - Rhs.x, Lhs - Rhs.y);
	}
#endif // CS_PLEB_NOTATION
	float2 operator*(real Lhs, const float2& Rhs) {
		return float2(Lhs * Rhs.x, Lhs * Rhs.y);
	}
#ifdef CS_PLEB_NOTATION
	real2 operator/(real Lhs, const real2& Rhs) {
		return real2(Lhs / Rhs.x, Lhs / Rhs.y);
	}
#endif // CS_PLEB_NOTATION
	real length(const float2& Arg) {
		return sqrt(Arg * Arg);
	}

	float2 normalize(const float2& Arg) {
		return (float2(Arg) / length(Arg));
	}

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& os, const real2& v) {
		os << v.x << "ex + " << v.y << "ey";
		return os;
	}
#endif // MATH_ENABLE_IO

}