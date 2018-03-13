//This header file contains definitions of class ht and
//prototypes of the methods
#ifndef HEIGHT_H
#define HEIGHT_H
class ht
{
	int ft, inch;
public:
	ht(void);
	ht(int, int);
void	input(void);
void	input(int, int);
ht 	operator +(const ht);
ht 	operator +(const int);
int 	operator >(const ht);
ht 	operator ++(void);
ht 	operator ++(const int);
void	output(void);
	~ht();
};
#endif
