#include "main.h"

/**
  *jack_bauer -prints every minute of the day
  *Return: nothing
  */
void jack_bauer(void);
{
	for (int hour = 0; hour < 24;
			hour++)
	{
		for (int min = 0; min < 60; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
