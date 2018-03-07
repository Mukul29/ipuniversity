#ifndef complexNumber_H
#define complexNumber_H

class complexNumber
{
	int re, im;
	public:
	complexNumber(void);
	complexNumber(int, int);
void	input(void);
void	input(int, int);
void	output(void);
complexNumber operator + (complexNumber);
	~complexNumber();
};
#endif
