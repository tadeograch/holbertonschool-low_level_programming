#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @n: int
 * Return: last digit (Success)
 */
int print_last_digit(int n)
{
	int LastD = n % 10;

	if (n < 0)
	{
		LastD = LastD * -1;
	}
	_putchar(LastD + '0');
	return (LastD);
}

