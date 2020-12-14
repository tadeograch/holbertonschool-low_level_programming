#include "holberton.h"

/**
 * _isalpha - Entry point
 *@c: int
 * Return: 1 if alpha, else 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

