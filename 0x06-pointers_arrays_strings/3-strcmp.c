#include "holberton.h"
/**
 * _strcmp- Entry point
 * @s1: char
 * @s2: char
 * Return: *s1 - *s2 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && (*s1 != '\0'))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
