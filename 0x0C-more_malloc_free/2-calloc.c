#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Entry point
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	a = (void *)malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)a)[i] = 0;
	}
	return (a);
}
