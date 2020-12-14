#include "holberton.h"

/**
 * _strchr - Entry point
 * @s: char
 * @c: char
 * Return: s (Success)
 */

char *_strchr(char *s, char c)
{
	while (c != *s && *s != '\0')
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
