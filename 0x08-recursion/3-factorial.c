#include "holberton.h"
/**
 * factorial - Entry point
 * @n: int
 * Return: factorial of n (Success)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * (factorial(n - 1)));
}
