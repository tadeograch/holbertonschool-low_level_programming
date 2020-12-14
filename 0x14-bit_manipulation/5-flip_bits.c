#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another.
 * @n: number
 * @m: number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, x;

	x = n ^ m;

	while (x > 0)
	{
		if ((x & 1) == 1)
		{
			bits++;
		}
		x >>= 1;
	}
	return (bits);
}
