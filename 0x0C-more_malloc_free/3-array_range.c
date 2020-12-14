#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Entry point
 * @min: int
 * @max: int
 * Return: pointer (Success)
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j, len;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min) + 1;
	a = (int *)malloc(sizeof(int) * len);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min, j = 0; j < len; i++, j++)
	{
		a[j] = i;
	}
	return (a);
}
