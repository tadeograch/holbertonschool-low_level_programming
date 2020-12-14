#include "holberton.h"
/**
 * cap_string - Entry point
 * @c: array
 * Return: c (Success)
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[0] >= 97 && c[0] <= 122)
		{
			c[0] -= 32;
		}
		if ((c[i] == 9) || (c[i] == 10))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}
		if ((c[i] >= 32) && (c[i] <= 34))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}
		if ((c[i] == 40) || (c[i] == 41) || (c[i] == 44 || c[i] == 46))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}
		if ((c[i] == 59) || (c[i] == 63) || (c[i] == 123) || (c[i] == 125))
		{
			if (c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}

	}
	return (c);
}
