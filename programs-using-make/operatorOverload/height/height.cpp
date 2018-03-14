//This program contains the methods of class
//ht which stores the height of a person in ft and inch
#include <iostream>
#include "height.h"
using namespace std;

ht::ht(void)
{
	ft = 5;
	inch = 7;
}
ht::ht(int f, int i)
{
	ft = f;
	inch = i;
}
void ht::input(void)
{
	cout<<"Enter ft: ";
	cin>>ft;
	cout<<"Enter inch: ";
	cin>>inch;
}
void ht::input(int f, int i)
{
	ft = f;
	inch = i;
}
ht ht::operator +(const ht t)
{
	ht temp;
	temp.ft = ft + t.ft + (inch + t.inch)/12;
	temp.inch = (inch + t.inch) % 12;
	return temp;
}
ht ht::operator +(const int i)
{
	ht temp;
	temp.ft = ft + (inch + i)/12;
	temp.inch = (inch + i) % 12;
	return temp;
}
int ht::operator >(const ht t)
{
	int minch, finch;
	minch = 12*ft + inch;
	finch = 12*t.ft + t.inch;
	if(minch > finch)
		return 1;
	else 
		return 0;
}
ht ht::operator ++(void)
{
	ft = ft + (inch + 1) / 12;
	inch = (inch + 1) % 12;
	return *this;
}
ht ht::operator ++(const int dummy)
{
	ht temp = *this;
	ft = ft + (inch + 1)/12;
	inch = (inch + 1) % 12;
	return temp;
}
ht ht::operator +=(const ht t)
{
	ht temp;
	ft = ft + t.ft + (inch + t.inch)/12;
	inch = (inch + t.inch) % 12;
	temp = *this;
	return temp;
}
ht ht::operator +=(const int i)
{
	ht temp;
	ft = ft + (inch + i)/12;
	inch = (inch + i) % 12;
	temp = *this;
	return temp;
}
void ht::output(void)
{
	cout<<"Height is:\n";
	cout<<"Ft: "<<ft<<endl;
	cout<<"Inch: "<<inch<<endl;
}
ht::~ht()
{
	cout<<"~\n";
}
