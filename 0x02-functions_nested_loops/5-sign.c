#include "main.h"

/**
  *print_sign -check main.h
  *@n :an integer variable
  *Description -checks whether n>0,n<0,n==0
  */
int print_sign(int n);
{
	int sign = 0:

	if (n > 0)
	{
		_putchar(+);
		sign = 1;
	}
	if (n == 0)
	{
		_putchar(0);
		sign = 0;
	}
	if (n < 0)
	{
		_putchar(-);
		sign = -1;
	}
	return (sign);
}
