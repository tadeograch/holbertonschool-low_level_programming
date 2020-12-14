#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Entry point
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
	}
	free(ptr);
	return (p);
}
