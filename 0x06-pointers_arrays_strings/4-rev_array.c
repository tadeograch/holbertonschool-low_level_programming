#include "holberton.h"
/**
 * reverse_array - Entry point
 * @a: array
 * @n: int
 * Return: void (Success)
 */
void reverse_array(int *a, int n)
{
	int x, y, z;

	z = n - 1;
	for (x = 0; x < z; x++, z--)
	{
		y = a[x];
		a[x] = a[z];
		a[z] = y;
	}
}
