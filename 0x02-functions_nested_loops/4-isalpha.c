#include "main.h"

/**
  *_isalpha -check main.h
  *@c input character
  *Description -checks if c uppercase or lowercase
  *Return: 1 if c upper or lower, 0 otherwise
  *
  */
int _isalpha(int c)
{
	char i;
	int num = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			num = 1;
	}

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			num = 1;
	}
	return (num);
}
