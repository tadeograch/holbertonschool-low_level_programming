#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - Entry point
 * @s: int
 * Return: void (Success)
 */
int _strlen(char *s)
{
	int n, len;

	n = len = 0;
	while (*(s + n) != '\0')
	{
		n++;
		len++;
	}
	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n : unsigned int
 * Return: pointer to str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n >= size2)
	{
		n = size2;
	}
	str = malloc(sizeof(char) * (size1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size1 ; a++)
	{
		*(str + a) = *(s1 + a);
	}
	for (b = 0; (b < n); b++)
	{
		*(str + (a + b)) = *(s2 + b);
	}
	str[a + b] = '\0';
	return (str);
}
