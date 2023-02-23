#include "main.h"

/**
  *print_numbers -prints numbers from 0 to 9,
  *followed by a new line
  *Return: nothing
  */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_puthchar(i);
	_putchar('\n');
}
