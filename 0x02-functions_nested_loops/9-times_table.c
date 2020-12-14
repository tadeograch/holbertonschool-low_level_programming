#include "holberton.h"

/**
 * times_table - Entry point
 *
 * Return: void (Success)
 */
void times_table(void)
{
	int sd, mult, x;

	for (sd = 0; sd <= 9; sd++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			x = sd * mult;
			if (mult == 0)
			{
				_putchar(x + '0');
			}
			else if (x <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
				else if (x >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
