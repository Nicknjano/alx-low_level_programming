#include "main.h"

/**
  *_isdigit -check whether c is a digit
  *@c: integer input
  *Return: 1 if c is digit or 0 otherwise
  */
int _isdigit(int c)
{
	char i;
	int value = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
