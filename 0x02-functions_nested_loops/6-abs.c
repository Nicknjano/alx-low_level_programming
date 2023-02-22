#include "main.h"

/**
  *_abs compute absolute value of an integer
  *@n: integer value
  *Return: absolute value of int n
  */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
