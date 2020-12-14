#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: int
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n; a > 97; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (a = n; a < 99; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}

	}
	printf("\n");
}
