#include "main.h"

/**
  *times_table - check main.h
  *Dexcription: print 9times table
  *Return: nothing
  */
void times_table(void)
{
	int result;
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			_putchar(result+',' + ' ');
		}
		_putchar('\n');
	}
}
