#include <geodesuka/core/math/vector/int2.h>

#include <geodesuka/core/math/config.h>

#include <geodesuka/core/math/number/type.h>

namespace geodesuka::core::math {

	//integer2 operator+(integer2 lhs, integer2 rhs) {
	//	integer2 temp = { lhs.x + rhs.x, lhs.y + rhs.y };
	//	return temp;
	//}
	//
	//integer2 operator-(integer2 lhs, integer2 rhs) {
	//	integer2 temp = { lhs.x - rhs.x, lhs.y - rhs.y };
	//	return temp;
	//}
	//
	//int operator*(integer2 lhs, integer2 rhs) {
	//	return (lhs.x * rhs.x + lhs.y * rhs.y);
	//}
	//
	//int operator^(integer2 lhs, integer2 rhs) {
	//	return (lhs.x*rhs.y - lhs.y*rhs.x);
	//}
	//
	//integer2 operator+(integer lhs, integer2 rhs) {
	//	integer2 temp = { lhs + rhs.x, lhs + rhs.y };
	//	return temp;
	//}
	//
	//integer2 operator-(integer lhs, integer2 rhs) {
	//	integer2 temp = { lhs - rhs.x, lhs - rhs.y };
	//	return temp;
	//}
	//
	//integer2 operator*(integer lhs, integer2 rhs) {
	//	integer2 temp = { lhs * rhs.x, lhs * rhs.y };
	//	return temp;
	//}
	//
	//integer2 operator+(integer2 lhs, integer rhs) {
	//	integer2 temp = { lhs.x + rhs, lhs.y + rhs };
	//	return temp;
	//}
	//
	//integer2 operator-(integer2 lhs, integer rhs) {
	//	integer2 temp = { lhs.x - rhs, lhs.y - rhs };
	//	return temp;
	//}
	//
	//integer2 operator*(integer2 lhs, integer rhs) {
	//	integer2 temp = { lhs.x * rhs, lhs.y * rhs };
	//	return temp;
	//}
	//
	//integer2 operator/(integer2 lhs, integer rhs) {
	//	integer2 temp;
	//	if (rhs != 0) {
	//		temp = { lhs.x / rhs, lhs.y / rhs };
	//	}
	//	else {
	//		temp = { INT_MAX, INT_MAX };
	//	}
	//	return temp;
	//}

	int2::int2() {
		this->x = 0; this->y = 0;
	}

	int2::~int2() {}
#ifdef CS_PLEB_NOTATION
	integer2::integer2(integer Arg) {
		this->x = Arg; this->y = Arg;
	}
#endif // CS_PLEB_NOTATION

	int2::int2(integer ArgX, integer ArgY) {
		this->x = ArgX; this->y = ArgY;
	}

	int2::int2(const int2& Arg) {
		this->x = Arg.x; this->y = Arg.y;
	}
#ifdef CS_PLEB_NOTATION
	integer2& integer2::operator=(integer Rhs) {
		this->x = Rhs; this->y = Rhs;
		return *this;
	}
#endif // CS_PLEB_NOTATION
	int2& int2::operator=(const int2& Rhs) {
		this->x = Rhs.x; this->y = Rhs.y;
		return *this;
	}

	integer int2::operator[](integer Index) const {
		return this->ptr[Index];
	}

	integer& int2::operator[](integer Index) {
		return this->ptr[Index];
	}

	int2 int2::operator-() const
	{
		return int2(-this->x, -this->y);
	}

	int2 int2::operator+(const int2& Rhs) const {
		return int2(this->x + Rhs.x, this->y + Rhs.y);
	}

	int2 int2::operator-(const int2& Rhs) const {
		return int2(this->x - Rhs.x, this->y - Rhs.y);
	}

	integer int2::operator*(const int2& Rhs) const {
		return (this->x * Rhs.x + this->y * Rhs.y);
	}

	integer int2::operator^(const int2& Rhs) const {
		return (this->x * Rhs.y - this->y * Rhs.x);
	}

	int2& int2::operator+=(const int2& Rhs) {
		*this = *this + Rhs;
		return *this;
	}

	int2& int2::operator-=(const int2& Rhs) {
		*this = *this - Rhs;
		return *this;
	}
#ifdef CS_PLEB_NOTATION
	integer2 integer2::operator+(integer Rhs) const {
		return integer2(this->x + Rhs, this->y + Rhs);
	}

	integer2 integer2::operator-(integer Rhs) const {
		return integer2(this->x - Rhs, this->y - Rhs);
	}
#endif // CS_PLEB_NOTATION
	int2 int2::operator*(integer Rhs) const {
		return int2(this->x * Rhs, this->y * Rhs);
	}

	int2 int2::operator/(integer Rhs) const
	{
		return int2(this->x / Rhs, this->y / Rhs);
	}
#ifdef CS_PLEB_NOTATION
	integer2& integer2::operator+=(integer Rhs) {
		*this = *this + Rhs;
		return *this;
	}

	integer2& integer2::operator-=(integer Rhs) {
		*this = *this - Rhs;
		return *this;
	}
#endif // CS_PLEB_NOTATION
	int2& int2::operator*=(integer Rhs) {
		*this = *this * Rhs;
		return *this;
	}

	int2& int2::operator/=(integer Rhs) {
		*this = *this / Rhs;
		return *this;
	}
#ifdef CS_PLEB_NOTATION
	integer2 operator+(integer Lhs, const integer2& Rhs) {
		return integer2(Lhs + Rhs.x, Lhs + Rhs.y);
	}

	integer2 operator-(integer Lhs, const integer2& Rhs) {
		return integer2(Lhs - Rhs.x, Lhs - Rhs.y);
	}
#endif // CS_PLEB_NOTATION
	int2 operator*(integer Lhs, const int2& Rhs) {
		return int2(Lhs * Rhs.x, Lhs * Rhs.y);
	}
#ifdef CS_PLEB_NOTATION
	integer2 operator/(integer Lhs, const integer2& Rhs) {
		return integer2(Lhs / Rhs.x, Lhs / Rhs.y);
	}
#endif // CS_PLEB_NOTATION

}