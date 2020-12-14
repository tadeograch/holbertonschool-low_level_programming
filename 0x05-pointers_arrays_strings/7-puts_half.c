#include "holberton.h"
/**
 * puts_half - Entry point
 * @str: int
 * Return: void (Success)
 */
void puts_half(char *str)
{
	int n, x;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	if (n % 2 == 0)
	{
		x = n / 2;
	}
	else
	{
		x = (n + 1) / 2;
	}
	while (x < n)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
