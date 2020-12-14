#include "holberton.h"
/**
 * _strpbrk - Entry point
 * @s: char
 * @accept: char
 * Return: s+a (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
