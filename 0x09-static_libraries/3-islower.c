#include "holberton.h"
/**
 * _islower - Entry point
 * @c: int
 * Return: 1 if lowercase, else 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

