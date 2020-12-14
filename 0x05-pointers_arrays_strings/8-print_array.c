#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Entry point
 * @a: int
 * @n: int
 * Return: void (Success)
 */
void print_array(int *a, int n)
{
	int  z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
