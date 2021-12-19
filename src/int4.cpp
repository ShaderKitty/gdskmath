#include <geodesuka/core/math/vector/int4.h>

#include <geodesuka/core/math/config.h>

#include <geodesuka/core/math/number/type.h>

int4& int4::operator=(int aRhs) {
	this->x = aRhs;
	this->y = aRhs;
	this->z = aRhs;
	this->t = aRhs;
	return *this;
}

int4& int4::operator=(const int4& aRhs) {
	this->x = aRhs.x;
	this->y = aRhs.y;
	this->z = aRhs.z;
	this->t = aRhs.t;
	return *this;
}

int4& int4::operator=(int4&& aRhs) noexcept {
	this->x = aRhs.x;
	this->y = aRhs.y;
	this->z = aRhs.z;
	this->t = aRhs.t;
	return *this;
}

int int4::operator[](int aIndex) const {
	return this->ptr[aIndex];
}

int& int4::operator[](int aIndex) {
	return this->ptr[aIndex];
}

int4 int4::operator-() const {
	return int4(-this->x, -this->y, -this->z, -this->t);
}

int4 int4::operator+(int aRhs) const {
	return int4(this->x + aRhs, this->y + aRhs, this->z + aRhs, this->t + aRhs);
}

int4 int4::operator+(const int4& aRhs) const {
	return int4(this->x + aRhs.x, this->y + aRhs.y, this->z + aRhs.z, this->t + aRhs.t);
}

int4 int4::operator-(int aRhs) const {
	return int4(this->x - aRhs, this->y - aRhs, this->z - aRhs, this->t - aRhs);
}

int4 int4::operator-(const int4& aRhs) const {
	return int4(this->x - aRhs.x, this->y - aRhs.y, this->z - aRhs.z, this->t - aRhs.t);
}

int4& int4::operator+=(int aRhs) {
	*this = *this + aRhs;
	return *this;
}

int4& int4::operator+=(const int4& aRhs) {
	*this = *this + aRhs;
	return *this;
}

int4& int4::operator-=(int aRhs) {
	*this = *this - aRhs;
	return *this;
}

int4& int4::operator-=(const int4& aRhs) {
	*this = *this - aRhs;
	return *this;
}

int4 int4::operator*(int aRhs) const {
	return int4(this->x * aRhs, this->y * aRhs, this->z * aRhs, this->t * aRhs);
}

int4 int4::operator/(int aRhs) const {
	return int4(this->x / aRhs, this->y / aRhs, this->z / aRhs, this->t / aRhs);
}

int4& int4::operator*=(int aRhs) {
	*this = *this * aRhs;
	return *this;
}

int4& int4::operator/=(int aRhs) {
	*this = *this / aRhs;
	return *this;
}

int int4::operator*(const int4& aRhs) const {
	return (this->x * aRhs.x + this->y * aRhs.y + this->z * aRhs.z + this->t * aRhs.t);
}

int4 operator+(int aLhs, const int4& aRhs) {
	return aRhs + aLhs;
}

int4 operator-(int aLhs, const int4& aRhs) {
	return int4(aLhs - aRhs.x, aLhs - aRhs.y, aLhs - aRhs.z, aLhs - aRhs.t);
}

int4 operator*(int aLhs, const int4& aRhs) {
	return aRhs * aLhs;
}

//int4::int4() {
//	this->x = 0; 
//	this->y = 0; 
//	this->z = 0; 
//	this->t = 0;
//}
//
//int4::~int4() {}
//
//#ifdef CS_PLEB_NOTATION
//int4::int4(int Arg) {
//	this->x = Arg; this->y = Arg; this->z = Arg; this->t = Arg;
//}
//#endif // CS_PLEB_NOTATION
//int4::int4(int ArgX, int ArgY, int ArgZ, int ArgT) {
//	this->x = ArgX; this->y = ArgY; this->z = ArgZ; this->t = ArgT;
//}
//
//int4::int4(const int4& Arg) {
//	this->x = Arg.x; this->y = Arg.y; this->z = Arg.z; this->t = Arg.t;
//}
//#ifdef CS_PLEB_NOTATION
//int4& int4::operator=(int Rhs) {
//	this->x = Rhs; this->y = Rhs; this->z = Rhs; this->t = Rhs;
//	return *this;
//}
//#endif // CS_PLEB_NOTATION
//int4& int4::operator=(const int4& Rhs) {
//	this->x = Rhs.x; this->y = Rhs.y; this->z = Rhs.z; this->t = Rhs.t;
//	return *this;
//}
//
//int int4::operator[](int Index) const {
//	return this->ptr[Index];
//}
//
//int& int4::operator[](int Index) {
//	return this->ptr[Index];
//}
//
//int4 int4::operator-() const {
//	return int4(-this->x, -this->y, -this->z, -this->t);
//}
//
//int4 int4::operator+(const int4& Rhs) const {
//	return int4(this->x + Rhs.x, this->y + Rhs.y, this->z + Rhs.z, this->t + Rhs.t);
//}
//
//int4 int4::operator-(const int4& Rhs) const {
//	return int4(this->x - Rhs.x, this->y - Rhs.y, this->z - Rhs.z, this->t - Rhs.t);
//}
//
//int int4::operator*(const int4& Rhs) const {
//	return (this->x * Rhs.x + this->y * Rhs.y + this->z * Rhs.z + this->t * Rhs.t);
//}
//
//int4& int4::operator+=(const int4& Rhs) {
//	*this = *this + Rhs;
//	return *this;
//}
//
//int4& int4::operator-=(const int4& Rhs) {
//	*this = *this - Rhs;
//	return *this;
//}
//
//#ifdef CS_PLEB_NOTATION
//int4 int4::operator+(int Rhs) const {
//	return int4(this->x + Rhs, this->y + Rhs, this->z + Rhs, this->t + Rhs);
//}
//
//int4 int4::operator-(int Rhs) const {
//	return int4(this->x - Rhs, this->y - Rhs, this->z - Rhs, this->t - Rhs);
//}
//#endif // CS_PLEB_NOTATION
//
//int4 int4::operator*(int Rhs) const {
//	return int4(this->x * Rhs, this->y * Rhs, this->z * Rhs, this->t * Rhs);
//}
//
//int4 int4::operator/(int Rhs) const {
//	return int4(this->x / Rhs, this->y / Rhs, this->z / Rhs, this->t / Rhs);
//}
//
//#ifdef CS_PLEB_NOTATION
//int4& int4::operator+=(int Rhs) {
//	*this = *this + Rhs;
//	return *this;
//}
//
//int4& int4::operator-=(int Rhs) {
//	*this = *this - Rhs;
//	return *this;
//}
//#endif // CS_PLEB_NOTATION
//
//int4& int4::operator*=(int Rhs) {
//	*this = *this * Rhs;
//	return *this;
//}
//
//int4& int4::operator/=(int Rhs) {
//	*this = *this / Rhs;
//	return *this;
//}
//#ifdef CS_PLEB_NOTATION
//int4 operator+(int Lhs, const int4& Rhs) {
//	return int4(Lhs + Rhs.x, Lhs + Rhs.y, Lhs + Rhs.z, Lhs + Rhs.t);
//}
//
//int4 operator-(int Lhs, const int4& Rhs) {
//	return int4(Lhs - Rhs.x, Lhs - Rhs.y, Lhs - Rhs.z, Lhs - Rhs.t);
//}
//#endif // CS_PLEB_NOTATION
//int4 operator*(int Lhs, const int4& Rhs) {
//	return int4(Lhs * Rhs.x, Lhs * Rhs.y, Lhs * Rhs.z, Lhs * Rhs.t);
//}
//#ifdef CS_PLEB_NOTATION
//int4 operator/(int Lhs, const int4& Rhs) {
//	return int4(Lhs / Rhs.x, Lhs / Rhs.y, Lhs / Rhs.z, Lhs / Rhs.t);
//}
//#endif // CS_PLEB_NOTATION

