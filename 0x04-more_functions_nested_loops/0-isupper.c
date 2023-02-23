#include "main.h"

/**
  *-isupper -check main.h
  *function checks whether c is uppercase
  *@c: integer input
  *Return: 1 if c is upper else 0
  */
int _isupper(int c)
{
	int value = 0;
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			value = 1;
			break;
		}
	}
	return (value);
}
