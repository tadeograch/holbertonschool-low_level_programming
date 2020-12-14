#include "holberton.h"
/**
 * jack_bauer - Entry point
 *
 * Return: void (Success)
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;

	while (a <= 2)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 5)
			{
				d = 0;
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
			if ((a == 2) && (b == 4))
			{
				break;
			}
		}
		a++;
	}
}
