#include "TComplex.h"

void print(TComplex z)
{
	printf("%lf + i*%lf\n", z.Re, z.Im);
}
TComplex operator-(TComplex z)
{
	TComplex w(0, 0);
	w.Re = -z.Re;
	w.Im = -z.Im;
	return w;
}

TComplex& operator++(TComplex& z)
{
	++z.Re;
	++z.Im;
	printf("Prefixna forma ++ \n");
	return z;
}
const TComplex operator++(TComplex& z, int i)
{
	++z.Re;
	++z.Im;
	printf("Postfixna forma ++ %d\n", i);
	return z;
}
