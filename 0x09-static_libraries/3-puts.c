#include "holberton.h"
/**
 * _puts- Entry point
 * @str: char
 * Return: void (Success)
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
