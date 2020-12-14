#include "holberton.h"
/**
 * _isupper - Entry point
 * @c : int
 * Return: 1 if is upper (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
