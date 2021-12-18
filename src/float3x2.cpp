#include <geodesuka/core/math/matrix/float3x2.h>

#include <geodesuka/core/math/config.h>

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

namespace geodesuka::core::math {

	real float3x2::operator()(integer RowElement, integer ColumnElement) const {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}
	real& float3x2::operator()(integer RowElement, integer ColumnElement) {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}

	float3x2 float3x2::operator-() const {
		float3x2 temp;
		for (integer i = 0; i < 3 * 2; i++) {
			temp.ptr[i] = -this->ptr[i];
		}
		return temp;
	}

	float3x2 float3x2::operator+(const float3x2& Rhs) const {
		float3x2 temp;
		for (integer i = 0; i < 3 * 2; i++) {
			temp.ptr[i] = this->ptr[i] + Rhs.ptr[i];
		}
		return temp;
	}

	float3x2 float3x2::operator-(const float3x2& Rhs) const {
		float3x2 temp;
		for (integer i = 0; i < 3 * 2; i++) {
			temp.ptr[i] = this->ptr[i] - Rhs.ptr[i];
		}
		return temp;
	}

	float3x2& float3x2::operator+=(const float3x2& Rhs) {
		for (integer i = 0; i < 3 * 2; i++) {
			this->ptr[i] += Rhs.ptr[i];
		}
		return *this;
	}

	float3x2& float3x2::operator-=(const float3x2& Rhs) {
		for (integer i = 0; i < 3 * 2; i++) {
			this->ptr[i] -= Rhs.ptr[i];
		}
		return *this;
	}

	float3 float3x2::operator*(const float2& Rhs) const {
		float3 temp;
		for (integer i = 0; i < 3; i++) {
			for (integer j = 0; j < 2; j++) {
				temp[i] += (*this)(i, j) * Rhs[j];
			}
		}
		return temp;
	}

	float3x2 float3x2::operator*(real Rhs) const {
		float3x2 temp;
		for (integer i = 0; i < 3 * 2; i++) {
			temp.ptr[i] = this->ptr[i] * Rhs;
		}
		return temp;
	}

	float3x2 float3x2::operator/(real Rhs) const {
		float3x2 temp;
		for (integer i = 0; i < 3 * 2; i++) {
			temp.ptr[i] = this->ptr[i] / Rhs;
		}
		return temp;
	}

	void float3x2::setr(const float2& Row1, const float2& Row2, const float2& Row3) {
		this->xx = Row1.x; this->xy = Row1.y;
		this->yx = Row2.x; this->yy = Row2.y;
		this->zx = Row3.x; this->zy = Row3.y;
	}

	void float3x2::setc(const float3& Col1, const float3& Col2) {
		this->xx = Col1.x; this->xy = Col2.x;
		this->yx = Col1.y; this->yy = Col2.y;
		this->zx = Col1.z; this->zy = Col2.z;
	}

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real3x2& Arg) {
		for (integer i = 1; i <= 3; i++) {
			Out << "| ";
			for (integer j = 1; j <= 2; j++) {
				Out << Arg(i, j) << " ";
			}
			Out << "|" << std::endl;
		}
		return Out;
	}
#endif // MATH_ENABLE_IO

}