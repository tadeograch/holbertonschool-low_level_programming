#include "holberton.h"

/**
 * _memcpy - Entry point
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
