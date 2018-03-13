//main for operator overload program
//adding two complex numbers using operator overloading
#include "complexNumber.h"
#include <iostream>

using namespace std;

int main()
{
	complexNumber x, y(2,3), z;
	z = x + y;
	x.output();
	y.output();
	z.output();
}
