#include "holberton.h"
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
