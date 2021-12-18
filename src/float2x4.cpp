#include <geodesuka/core/math/matrix/float2x4.h>

#include <geodesuka/core/math/config.h>

#ifdef MATH_ENABLE_IO
#include <iostream>
#endif // MATH_ENABLE_IO

namespace geodesuka::core::math {

	real float2x4::operator()(integer RowElement, integer ColumnElement) const {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}

	real& float2x4::operator()(integer RowElement, integer ColumnElement) {
#ifdef ROW_MAJOR_MEMORY_LAYOUT
		// Row Major Memory Layout
		return this->aptr[RowElement - 1][ColumnElement - 1];
#else
		// Column Major Memory Layout
		return this->aptr[ColumnElement - 1][RowElement - 1];
#endif // !ROW_MAJOR_MEMORY_LAYOUT
	}

	float2x4 float2x4::operator-() const {
		float2x4 temp;
		for (integer i = 0; i < 2 * 4; i++) {
			temp.ptr[i] = this->ptr[i];
		}
		return temp;
	}

	float2x4 float2x4::operator+(const float2x4& Rhs) const {
		float2x4 temp;
		for (integer i = 0; i < 2 * 4; i++) {
			temp.ptr[i] = this->ptr[i] + Rhs.ptr[i];
		}
		return temp;
	}

	float2x4 float2x4::operator-(const float2x4& Rhs) const {
		float2x4 temp;
		for (integer i = 0; i < 2 * 4; i++) {
			temp.ptr[i] = this->ptr[i] - Rhs.ptr[i];
		}
		return temp;
	}

	float2x4& float2x4::operator+=(const float2x4& Rhs) {
		for (integer i = 0; i < 2 * 4; i++) {
			this->ptr[i] += Rhs.ptr[i];
		}
		return *this;
	}

	float2x4& float2x4::operator-=(const float2x4& Rhs) {
		for (integer i = 0; i < 2 * 4; i++) {
			this->ptr[i] += Rhs.ptr[i];
		}
		return *this;
	}

	float2 float2x4::operator*(const float4& Rhs) const {
		float2 temp;
		for (integer i = 0; i < 2; i++) {
			temp.ptr[i] = 0.0;
			for (integer j = 0; j < 4; j++) {
				temp.ptr[i] += (*this)(i + 1, j + 1) * Rhs.ptr[j];
			}
		}
		return temp;
	}

	float2x4 float2x4::operator*(real Rhs) const {
		float2x4 temp;
		for (integer i = 0; i < 2 * 4; i++) {
			temp.ptr[i] = this->ptr[i] * Rhs;
		}
		return temp;
	}

	float2x4 float2x4::operator/(real Rhs) const {
		float2x4 temp;
		for (integer i = 0; i < 2 * 4; i++) {
			temp.ptr[i] = this->ptr[i] / Rhs;
		}
		return temp;
	}

	void float2x4::setr(const float4& Row1, const float4& Row2) {
		this->xx = Row1.x; this->xy = Row1.y; this->xz = Row1.z; this->xt = Row1.t;
		this->yx = Row2.x; this->yy = Row2.y; this->yz = Row2.z; this->yt = Row2.t;
	}

	void float2x4::setc(const float2& Col1, const float2& Col2, const float2& Col3, const float2& Col4) {
		this->xx = Col1.x; this->xy = Col2.x; this->xz = Col3.x; this->xt = Col4.x;
		this->yx = Col1.y; this->yy = Col2.y; this->yz = Col3.y; this->yt = Col4.y;
	}

#ifdef MATH_ENABLE_IO
	std::ostream& operator<<(std::ostream& Out, const real2x4& Arg)
	{
		for (integer i = 1; i <= 2; i++) {
			Out << "| ";
			for (integer j = 1; j <= 4; j++) {
				Out << Arg(i, j) << " ";
			}
			Out << "|" << std::endl;
		}
		return Out;
	}
#endif // MATH_ENABLE_IO

}