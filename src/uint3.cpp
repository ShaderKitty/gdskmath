#include <geodesuka/core/math/vector/uint3.h>

#include <limits.h>

#include <geodesuka/core/math/config.h>

uint3 operator+(uint3 lhs, uint3 rhs) {
	uint3 temp = { lhs.x + rhs.x, lhs.y + rhs.y, lhs.z + rhs.z };
	return temp;
}

uint3 operator-(uint3 lhs, uint3 rhs) {
	uint3 temp = { lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z };
	return temp;
}

uint operator*(uint3 lhs, uint3 rhs) {
	return (lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z);
}

uint3 operator^(uint3 lhs, uint3 rhs) {
	uint3 temp = { lhs.y * rhs.z - lhs.z * rhs.y, lhs.z * rhs.x - lhs.x * rhs.z, lhs.x * rhs.y - lhs.y * rhs.x };
	return temp;
}

uint3 operator+(uint lhs, uint3 rhs) {
	uint3 temp = { lhs + rhs.x, lhs + rhs.y, lhs + rhs.z };
	return temp;
}

uint3 operator-(uint lhs, uint3 rhs) {
	uint3 temp = { lhs - rhs.x, lhs - rhs.y, lhs - rhs.z };
	return temp;
}

uint3 operator*(uint lhs, uint3 rhs) {
	uint3 temp = { lhs * rhs.x, lhs * rhs.y, lhs * rhs.z };
	return temp;
}

uint3 operator/(uint lhs, uint3 rhs) {
	uint3 temp;

	if (rhs.x != 0u) {
		temp.x = lhs / rhs.x;
	}
	else {
		temp.x = UINT_MAX;
	}

	if (rhs.y != 0u) {
		temp.y = lhs / rhs.y;
	}
	else {
		temp.y = UINT_MAX;
	}

	if (rhs.z != 0u) {
		temp.z = lhs / rhs.z;
	}
	else {
		temp.z = UINT_MAX;
	}

	return temp;
}

uint3 operator+(uint3 lhs, uint rhs) {
	uint3 temp = { lhs.x + rhs, lhs.y + rhs, lhs.z + rhs };
	return temp;
}

uint3 operator-(uint3 lhs, uint rhs) {
	uint3 temp = { lhs.x - rhs, lhs.y - rhs, lhs.z - rhs };
	return temp;
}

uint3 operator*(uint3 lhs, uint rhs) {
	uint3 temp = { lhs.x * rhs, lhs.y * rhs, lhs.z * rhs };
	return temp;
}

uint3 operator/(uint3 lhs, uint rhs) {
	uint3 temp;
	if (rhs != 0u) {
		temp = { lhs.x / rhs, lhs.y / rhs, lhs.z / rhs };
	}
	else {
		temp = { UINT_MAX, UINT_MAX, UINT_MAX };
	}
	return temp;
}

