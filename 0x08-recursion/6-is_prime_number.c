#include "holberton.h"
/**
 * is_prime_number - Entry point
 * @n: int
 * Return: prime (Success)
 */
int is_prime_number(int n)
{
	int x;

	if (n <= 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	x = _prime_check(n, 3);
	if (x != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * _prime_check - Entry point
 * @n: int
 * @i: int
 * Return: check (Success)
 */
int _prime_check(int n, int i)
{
	if (i >= n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime_check(n, i + 2));
}
