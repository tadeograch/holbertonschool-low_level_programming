#include "holberton.h"

int _pow(int n);

/**
 * _atoi - check the code for Holberton School students.
 * @s: string pointer to be determined.
 * Return: int.
 */
int _atoi(char *s)
{
	int ini, fin, x, z, res, sig;

	sig = 1;
	res = 0;
	z = 0;
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == '-')
		{
			sig *= -1;
		}
		if (s[x] >= '0' && s[x] <= '9')
		{
			break;
		}
	}
	if (s[x] == '\0')
	{
		return (0);
	}
	else
	{
		ini = x;
		for (; (s[x] >= '0' && s[x] <= '9') && (s[x] != '\0'); x++)
		{
			fin = x;
		}
		for (; fin >= ini; fin--, z++)
		{
			res += ((s[fin] - '0') * _pow(z)) * sig;
		}
		return (res);
	}
}

/**
 * _pow - check the code for Holberton School students.
 * @n: string pointer to be determined.
 * Return: int.
 */
int _pow(int n)
{
	int res = 1;
	int i;

	for (i = 0; i < n; i++)
	{
		res *= 10;
	}
	return (res);
}
