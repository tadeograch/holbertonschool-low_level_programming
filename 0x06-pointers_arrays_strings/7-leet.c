#include "holberton.h"
/**
 * leet - Entry point
 * @c: array
 * Return: c (Success)
 */

char *leet(char *c)
{
	char my[21] = "A4a4E3e3O0o0L1l1T7t7";
	int a, b;

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; (my[b] != '\0') && (c[a] != my[b]); b++)
		{
		}
		if (c[a] == my[b])
		{
			c[a] = my[b + 1];
		}
	}
	return (c);
}
