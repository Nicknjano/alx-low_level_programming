#include "main.h"

/**
  *@n: integer input
  *print_diagonal -prints diagonal on terminal
  *Return: nothing
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar('\');
			}
		}
	}
	_putchar('\n');
}
