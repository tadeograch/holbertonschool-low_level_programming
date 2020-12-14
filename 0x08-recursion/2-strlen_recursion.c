#include "holberton.h"
/**
 * _strlen_recursion - Entry point
 * @s: char
 * Return: len (Success)
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == 0)
	{
		return (0);
	}
	len += _strlen_recursion(s + 1) + 1;
	return (len);
}
