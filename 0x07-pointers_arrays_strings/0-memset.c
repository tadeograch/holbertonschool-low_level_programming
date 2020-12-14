#include "holberton.h"

/**
 * _memset - Entry point
 * @s: char
 * @b: char
 * @n: unsigned int
 * Return: s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
