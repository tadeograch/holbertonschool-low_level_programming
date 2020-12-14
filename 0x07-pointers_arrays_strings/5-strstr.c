#include "holberton.h"

/**
 * _strstr - Entry point
 * @haystack: char
 * @needle: char
 * Return: haystack (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		{
			for (c = a, b = 0; needle[b] != '\0' && haystack[c] == needle[b]; c++, b++)
			{
				if (needle[b] != haystack[c] || haystack[c] == '\0')
				{
					break;
				}
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return ('\0');
}
