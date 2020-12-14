#include "holberton.h"
/**
 * print_numbers - Entry point
 * Return: numbers (Success)
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
