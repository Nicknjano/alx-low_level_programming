#include "main.h"

/**
  *more_numbers -prints more numbers,
  *followed by a newline
  *Return: nothing
  */
void more_numbers(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
