#include "holberton.h"
/**
 * puts2 - Entry point
 * @str: char
 * Return: void (Success)
 */
void puts2(char *str)
{
	int a, n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	for (a = 0; a < n; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
