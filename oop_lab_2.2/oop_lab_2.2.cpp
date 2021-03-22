#include "TComplex.h"
int main()
{

	TComplex z(1, 1), u(0, 0);
	++z;
	print(z);
	z++;
	print(z);
	u = -z;
	print(u);
	return 0;
}
