#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int exp = 1, aux;
	int x, i = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	while (exp * 2 <= n)
	{
		i++;
		exp *= 2;
	}
	_putchar('1');
	i--;
	while (i >= 0)
	{
		x = 0;
		aux = 1;
		while (x < i)
		{
			aux *= 2;
			x++;
		}
		if ((exp + aux) <= n)
		{
			_putchar('1');
			exp += aux;
		}
		else
		{
			_putchar('0');
		}
		i--;
	}
}
