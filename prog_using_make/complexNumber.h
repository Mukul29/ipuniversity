//Header file for complexNumber
#ifndef complexNumber_H //include guard, read on wikipedia
#define complexNumber_H

class complexNumber
{
	int re, im;
	public:
	complexNumber(void); //default constructor
	complexNumber(int, int); //explicit constructor
void	input(void); //input function without arguments
void	input(int, int); //input function with arguments
void	output(void); //display elements of an object
complexNumber operator + (complexNumber);
	~complexNumber();
};
#endif //end of include guard
