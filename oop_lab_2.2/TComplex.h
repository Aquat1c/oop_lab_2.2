#pragma once
#include <stdio.h>
class TComplex

{
	double Re;
	double Im;
public:
	TComplex(double x, double y) :Re(x), Im(y) { }
	TComplex(TComplex& z) { Re = z.Re; Im = z.Im; }
	~TComplex() {}
	friend void print(TComplex z);
	friend TComplex operator-(TComplex z);
	friend TComplex& operator++(TComplex& z);
	friend const TComplex operator++(TComplex& z, int i);

};
