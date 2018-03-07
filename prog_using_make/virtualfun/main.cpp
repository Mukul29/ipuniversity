#include <iostream>
#include "car.h"
#include "lambo.h"
#include "fer.h"

using namespace std;

int main()
{
	car *p;
	int ch;
	lambo l;
	fer f;
	cout<<"Enter ch: ";
	cin>>ch;
	if(ch)
		p = &l;
	else
		p = &f;
	p->move();
	return 0;
}
