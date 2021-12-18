#include <geodesuka/core/math/matrix/float2x3.h>

#include <string.h>

#include <geodesuka/core/math/config.h>

#include <geodesuka/core/math/vector/float2.h>
#include <geodesuka/core/math/vector/float3.h>
#include <geodesuka/core/math/vector/float4.h>

namespace geodesuka::core::math {

	float2x3::float2x3(const float2x3& Arg) {
		memcpy(this->ptr, Arg.ptr, 2 * 3 * sizeof(real));
	}

	float2x3& float2x3::operator=(const float2x3& Rhs) {
		memcpy(this->ptr, Rhs.ptr, 2 * 3 * sizeof(real));
		return *this;
	}

	real float2x3::operator()(integer RowElement, integer ColumnElement) const {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}

	real& float2x3::operator()(integer RowElement, integer ColumnElement) {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}

	float2x3 float2x3::operator-() const {
		float2x3 temp;
		for (integer i = 0; i < 2 * 3; i++) {
			temp.ptr[i] = -this->ptr[i];
		}
		return temp;
	}

	float2x3 float2x3::operator+(const float2x3& Rhs) const {
		float2x3 temp;
		for (integer i = 0; i < 2 * 3; i++) {
			temp.ptr[i] = this->ptr[i] + Rhs.ptr[i];
		}
		return temp;
	}

	float2x3 float2x3::operator-(const float2x3& Rhs) const {
		float2x3 temp;
		for (integer i = 0; i < 2 * 3; i++) {
			temp.ptr[i] = this->ptr[i] - Rhs.ptr[i];
		}
		return temp;
	}

	float2x3& float2x3::operator+=(const float2x3& Rhs) {
		for (integer i = 0; i < 2 * 3; i++) {
			this->ptr[i] += Rhs.ptr[i];
		}
		return *this;
	}

	float2x3& float2x3::operator-=(const float2x3& Rhs) {
		for (integer i = 0; i < 2 * 3; i++) {
			this->ptr[i] -= Rhs.ptr[i];
		}
		return *this;
	}

	float2 float2x3::operator*(const float3& Rhs) const {
		float2 temp;
		for (integer i = 0; i < 2; i++) {
			temp[i] = 0.0;
			for (integer j = 0; j < 3; j++) {
				temp[i] += (*this)(i, j) * Rhs[j];
			}
		}
		return temp;
	}

	float2x3 float2x3::operator*(real Rhs) const {
		float2x3 temp;
		for (integer i = 0; i < 2 * 3; i++) {
			temp.ptr[i] = this->ptr[i] * Rhs;
		}
		return temp;
	}

	float2x3 float2x3::operator/(real Rhs) const {
		float2x3 temp;
		for (integer i = 0; i < 2 * 3; i++) {
			temp.ptr[i] = this->ptr[i] / Rhs;
		}
		return temp;
	}

	void float2x3::setr(const float3& Row1, const float3& Row2) {
		this->xx = Row1.x; this->xy = Row1.y; this->xz = Row1.z;
		this->yx = Row2.x; this->yy = Row2.y; this->yz = Row2.z;
	}

	void float2x3::setc(const float2& Col1, const float2& Col2, const float2& Col3) {
		this->xx = Col1.x; this->xy = Col2.x; this->xz = Col3.x;
		this->yx = Col1.y; this->yy = Col2.y; this->yz = Col3.y;
	}

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real2x3& Arg) {
		for (integer i = 1; i <= 2; i++) {
			Out << "| ";
			for (integer j = 1; j <= 3; j++) {
				Out << Arg(i, j) << " ";
			}
			Out << "|" << std::endl;
		}
		return Out;
	}
#endif // MATH_ENABLE_IO

}
