#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	int abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;
	}
	_putchar('\n');
}
