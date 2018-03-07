#ifndef CAR_H //This is known as an include guard to prevent double inclusion when
#define CAR_H //dealing with the include directive
#include <iostream>
using namespace std;
class car
{
	public:
	virtual void move() = 0;
};
#endif
