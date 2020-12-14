#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: int
 * @size: int
 * Return: void (Success)
 */

void print_diagsums(int *a, int size)
{
	int i, x, y;
	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	x = size + 1;
	y = size - 1;
	for (i = 0; i <= (size * size); i += x)
	{
		sum1 += a[i];
	}
	i = (size * size) - 1;
	for (i = y; i <= (size * size - y); i += y)
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
