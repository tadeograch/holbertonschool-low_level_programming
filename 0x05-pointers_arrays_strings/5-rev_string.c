#include "holberton.h"
/**
 * rev_string - Entry point
 * @s: char
 * Return: void (Success)
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	b = 0;
	while (*(s + b) != '\0')
	{
		b++;
	}
	a = 0;
	b -= 1;
	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++;
		b--;
	}
}
