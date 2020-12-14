#include "holberton.h"

/**
 * string_toupper - Entry point
 * @c: array
 * Return: c (Success)
 */
char *string_toupper(char *c)
{
	int x;

	for (x = 0; c[x] != '\0'; x++)
	{
		if (c[x] >= 'a' && c[x] <= 'z')
		{
			c[x] -= 32;
		}
	}
	return (c);
}
