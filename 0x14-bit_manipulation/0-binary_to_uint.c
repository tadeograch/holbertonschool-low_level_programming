#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: points to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, exp = 1;
	unsigned int mul = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
		i++;

	i -= 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			mul += exp;

		exp *= 2;
		i--;
	}
	return (mul);
}
