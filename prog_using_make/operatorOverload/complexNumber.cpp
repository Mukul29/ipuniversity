#include <iostream>
#include "complexNumber.h"

using namespace std;

complexNumber::complexNumber(void)
{
	re = 1;
	im = 1;
}

complexNumber::complexNumber(int a, int b)
{
	re = a;
	im = b;
}

void complexNumber::input(void)
{
	cout<<"Enter the real part: ";
	cin>>re;
	cout<<"Enter the imaginary part: ";
	cin>>im;
}

void complexNumber::input(int a, int b)
{
	re = a;
	im = b;
}

void complexNumber::output(void)
{
	cout<<"Complex number: "<<re<<" + ("<<im<<")i\n";
}

complexNumber complexNumber::operator + (complexNumber t)
{
	complexNumber temp;
	temp.re = re + t.re;
	temp.im = im + t.im;
	return temp;
}

complexNumber::~complexNumber()
{
	cout<<"Destructor called.\n";
}
