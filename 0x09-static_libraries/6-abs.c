#include "holberton.h"
/**
 * _abs - Entry point
 *@n: int
 * Return: abs (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}

