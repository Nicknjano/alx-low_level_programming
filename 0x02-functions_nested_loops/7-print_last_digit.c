#include "main.h"

/**
  *print_last_digit -check main.h
  *@n integer value
  *Description: prints last digit of a number
  *Return: value of last digit
  */
int print_last_digit(int n)
{
	int last;
	
	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar (last);
	return (last);
}
