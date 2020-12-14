#include "holberton.h"
/**
 * _strcpy - Entry point
 * @dest: char
 * @src: char
 * Return: void (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int x, n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	for (x = 0; x <= n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
