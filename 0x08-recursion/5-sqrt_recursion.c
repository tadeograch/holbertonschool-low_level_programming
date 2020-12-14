#include "holberton.h"
/**
 * increment - function to help
 * @n: int
 * @i: int
 * Return: increment (Success)
 */
int increment(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (increment(n, i + 1));
}
/**
 * _sqrt_recursion - function to help
 * @n: int
 * Return: increment (Success)
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	return (increment(n, 1));
}
