#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b;

	while (a <= 9)
	{
		b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		a++;
	}
}

