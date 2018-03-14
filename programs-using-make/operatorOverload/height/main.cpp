//Program to implement operator overloading on a class
//ht which stores the height of a person in ft and inch
#include <iostream>
#include "height.h"

using namespace std;

int main(void)
{
	ht m, f(5, 6), z, t;
	z = m + f;
	m.output();
	f.output();
	z.output();
	z = z + 3;
	z.output();
	t = ++z;
	t.output();
	z.output();
	t = z++;
	t.output();
	z.output();
	cout<<(m > f)<<endl;
	t += 3;
	t.output();
	t += z;
	t.output();
	return 0;
}
