#include "main.h"

/**
  *print_line -prints line n times,
  *followed by a new line
  *@n: integer input
  *Return: nothing
  */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
