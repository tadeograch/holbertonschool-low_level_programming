#include "holberton.h"
/**
 * print_rev - Entry point
 * @s: char
 * Return: void (Success)
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		n++;
	}
	n -= 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
