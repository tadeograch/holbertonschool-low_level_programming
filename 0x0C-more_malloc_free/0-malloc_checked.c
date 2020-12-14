#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: unsigned int
 * Return: pointer (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
