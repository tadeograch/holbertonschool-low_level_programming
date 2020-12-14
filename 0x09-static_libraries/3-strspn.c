#include "holberton.h"

/**
 * _strspn - Entry point
 * @s: char
 * @accept: char
 * Return: len (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, len = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				len++;
				break;
			}
		}
		if (s[a] != accept[b])
		{
			break;
		}
	}
	return (len);
}
