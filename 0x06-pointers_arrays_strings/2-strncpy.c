#include "holberton.h"
/**
 * _strncpy- Entry point
 * @src: char
 * @dest: char
 * @n: int
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, x, z;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	if (len < n)
	{
		for (x = 0; x < len; x++)
		{
			dest[x] = src[x];
		}
		for (; x < n; x++)
		{
			dest[x] = '\0';
		}
	}
	else
	{
		for (z = 0; z < n; z++)
		{
			dest[z] = src[z];
		}
	}
	return (dest);
}
