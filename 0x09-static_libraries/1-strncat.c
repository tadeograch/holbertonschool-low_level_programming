#include "holberton.h"

/**
 * _strncat- Entry point
 * @src: char
 * @dest: char
 * @n: int
 * Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
