#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: the index
 *
 * Return: The value of the bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	x <<= index;
	if ((x & n) != 0)
		return (1);
	else
		return (0);

	return (-1);
}
