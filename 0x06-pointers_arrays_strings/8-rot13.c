#include "holberton.h"
/**
 * rot13 - Entry point
 * @c: array
 * Return: c (Success)
 */
char *rot13(char *c)
{
	char abc[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char rot[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int a, b;

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; abc[b] != '\0'; b++)
		{
			if (c[a] == abc[b])
			{
				c[a] = rot[b];
				break;
			}
		}
	}
	return (c);
}
