#include <stdlib.h>
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

/**
 *argstostr - pointer to a string of arguments.
 *@ac: counts the arguments supplied to the program
 *@av: arrays of pointers to the string that are supplied to the program
 *
 *Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, slen = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		slen += _strlen(av[i]) + 1;
	}
	s = malloc(sizeof(char) * slen + 1);
	if (s == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *(av[i] + j) != '\0'; j++, len++)
		{
			s[len] = *(av[i] + j);
		}
		s[len] = '\n';
		len++;
	}
	s[len] = '\0';
	return (s);
}
