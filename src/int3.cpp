#include <geodesuka/core/math/vector/int3.h>

#include <geodesuka/core/math/config.h>

#include <geodesuka/core/math/number/type.h>

//int3 operator+(int3 lhs, int3 rhs) {
//	int3 temp = { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z };
//	return temp;
//}
//
//int3 operator-(int3 lhs, int3 rhs) {
//	int3 temp = { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z };
//	return temp;
//}
//
//int operator*(int3 lhs, int3 rhs) {
//	return (lhs.x*rhs.x + lhs.y*rhs.y + lhs.z*rhs.z);
//}
//
//int3 operator^(int3 lhs, int3 rhs) {
//	/* 1 2 -> 3 | 1 2 -> 3 | 3 1 -> 2 */
//	int3 temp = { lhs.y*rhs.z - lhs.z*rhs.y, lhs.z*rhs.x - lhs.x*rhs.z, lhs.x*rhs.y - lhs.y*rhs.x };
//	return temp;
//}
//
//int3 operator+(int lhs, int3 rhs) {
//	int3 temp = { lhs + rhs.x, lhs + rhs.y, lhs + rhs.z };
//	return temp;
//}
//
//int3 operator-(int lhs, int3 rhs) {
//	int3 temp = { lhs - rhs.x, lhs - rhs.y, lhs - rhs.z };
//	return temp;
//}
//
//int3 operator*(int lhs, int3 rhs) {
//	int3 temp = { lhs * rhs.x, lhs * rhs.y, lhs * rhs.z };
//	return temp;
//}
//
//int3 operator+(int3 lhs, int rhs) {
//	int3 temp = { lhs.x + rhs, lhs.y + rhs, lhs.z + rhs };
//	return temp;
//}
//
//int3 operator-(int3 lhs, int rhs) {
//	int3 temp = { lhs.x - rhs, lhs.y - rhs, lhs.z - rhs };
//	return temp;
//}
//
//int3 operator*(int3 lhs, int rhs) {
//	int3 temp = { lhs.x * rhs, lhs.y * rhs, lhs.z * rhs };
//	return temp;
//}
//
//int3 operator/(int3 lhs, int rhs) {
//	int3 temp;
//	if (rhs != 0) {
//		temp = { lhs.x / rhs, lhs.y / rhs, lhs.z / rhs };
//	}
//	else {
//		temp = { INT_MAX, INT_MAX, INT_MAX };
//	}
//	return temp;
//}

int3::int3() {
	this->x = 0; this->y = 0; this->z = 0;
}

int3::~int3() {}

#ifdef CS_PLEB_NOTATION
int3::int3(int Arg) {
	this->x = Arg; this->y = Arg; this->z = Arg;
}
#endif // CS_PLEB_NOTATION

int3::int3(int ArgX, int ArgY, int ArgZ) {
	this->x = ArgX; this->y = ArgY; this->z = ArgZ;
}

int3::int3(const int3& Arg) {
	this->x = Arg.x; this->y = Arg.y; this->z = Arg.z;
}
#ifdef CS_PLEB_NOTATION
int3& int3::operator=(int Rhs) {
	this->x = Rhs; this->y = Rhs; this->z = Rhs;
	return *this;
}
#endif // 
int3& int3::operator=(const int3& Rhs) {
	this->x = Rhs.x; this->y = Rhs.y; this->z = Rhs.z;
	return *this;
}

int int3::operator[](int Index) const {
	return this->ptr[Index];
}

int& int3::operator[](int Index) {
	return this->ptr[Index];
}

int3 int3::operator-() const {
	return int3(-this->x, -this->y, -this->z);
}

int3 int3::operator+(const int3& Rhs) const {
	return int3(this->x + Rhs.x, this->y + Rhs.y, this->z + Rhs.z);
}

int3 int3::operator-(const int3& Rhs) const {
	return int3(this->x - Rhs.x, this->y - Rhs.y, this->z - Rhs.z);
}

int int3::operator*(const int3& Rhs) const {
	return (this->x * Rhs.x + this->y * Rhs.y + this->z * Rhs.z);
}

int3 int3::operator^(const int3& Rhs) const {
	return int3(
		this->y * Rhs.z - this->z * Rhs.y,
		this->z * Rhs.x - this->x * Rhs.z,
		this->x * Rhs.y - this->y * Rhs.x
	);
}

int3& int3::operator+=(const int3& Rhs) {
	*this = *this + Rhs;
	return *this;
}

int3& int3::operator-=(const int3& Rhs) {
	*this = *this - Rhs;
	return *this;
}

int3& int3::operator^=(const int3& Rhs) {
	*this = *this ^ Rhs;
	return *this;
}
#ifdef CS_PLEB_NOTATION
int3 int3::operator+(int Rhs) const {
	return int3(this->x + Rhs, this->y + Rhs, this->z + Rhs);
}

int3 int3::operator-(int Rhs) const {
	return int3(this->x - Rhs, this->y - Rhs, this->z - Rhs);
}
#endif // CS_PLEB_NOTATION
int3 int3::operator*(int Rhs) const {
	return int3(this->x * Rhs, this->y * Rhs, this->z * Rhs);
}

int3 int3::operator/(int Rhs) const {
	return int3(this->x / Rhs, this->y / Rhs, this->z / Rhs);
}
#ifdef CS_PLEB_NOTATION
int3& int3::operator+=(int Rhs) {
	*this = *this + Rhs;
	return *this;
}

int3& int3::operator-=(int Rhs) {
	*this = *this - Rhs;
	return *this;
}
#endif // CS_PLEB_NOTATION
int3& int3::operator*=(int Rhs) {
	*this = *this * Rhs;
	return *this;
}

int3& int3::operator/=(int Rhs) {
	*this = *this / Rhs;
	return *this;
}
#ifdef CS_PLEB_NOTATION
int3 operator+(int Lhs, const int3& Rhs) {
	return int3(Lhs + Rhs.x, Lhs + Rhs.y, Lhs + Rhs.z);
}

int3 operator-(int Lhs, const int3& Rhs) {
	return int3(Lhs - Rhs.x, Lhs - Rhs.y, Lhs - Rhs.z);
}
#endif // CS_PLEB_NOTATION
int3 operator*(int Lhs, const int3& Rhs)
{
	return int3(Lhs * Rhs.x, Lhs * Rhs.y, Lhs * Rhs.z);
}
#ifdef CS_PLEB_NOTATION
int3 operator/(int Lhs, const int3& Rhs) {
	return int3(Lhs / Rhs.x, Lhs / Rhs.y, Lhs / Rhs.z);
}
#endif // CS_PLEB_NOTATION

