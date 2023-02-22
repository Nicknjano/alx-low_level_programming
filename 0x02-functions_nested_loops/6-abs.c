#include "main.h"

/**
  *_abs check main.h
  *@n: integer value
  *Description: compute absolute value of an integer
  *Return: always success
  */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
