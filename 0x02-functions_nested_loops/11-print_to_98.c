#include "main.h"

/**
  *@n: starting number
  *print_to_98 -prints from  n to 98
  *Return: nothing
  */
void print_to_98(int n)
{
	int i;
	for (i = n; i <= 98; i++)
	{
		_putchar(i + ', ');
	}
}
