#include "holberton.h"
/**
 * more_numbers - Entry point
 * Return: void (Success)
 */
void more_numbers(void)
{
	int a, b, c;
	int d = 1;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				c = b % 10;
				_putchar(d + '0');
			}
			else
			{
				c = b;
			}
			_putchar(c + '0');
		}
		_putchar('\n');
	}
}
