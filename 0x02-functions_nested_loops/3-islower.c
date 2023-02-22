#include "main.h"

/**
  *_islower - check if c is lowercase
  *Return: 1 if c lowercase, 0 otherwise
  */
int islower(int c)
{
	int lower = 0;
	char n;

	for(n='a';n<='z';n++)
	{
		if(n==c)
			lower = 1;
	}

	return (lower);
}
