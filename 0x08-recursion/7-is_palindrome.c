#include "holberton.h"

/**
 * _strlen_recursion - Entry point
 * @s: char
 * Return: len (Success)
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s == 0)
{
return (0);
}
len += _strlen_recursion(s + 1) + 1;
return (len);
}

/**
 * is_palindrome - Entry point
 * @s: char
 * Return: palindrome (Success)
 */

int is_palindrome(char *s)
{
int x, len;

x = 0;
len = _strlen_recursion(s);
return (analize(s, len - 1, x));
}

/**
 * analize - Entry point
 * @s: char
 * @len: int
 * @x: int
 * Return: 0 (Success)
 */
int analize(char *s, int len, int x)
{
if (x < len && *(s + x) == *(s + len))
{
return (analize(s, len - 1, x + 1));
}
if (x >= len)
{
return (1);
}
return (0);
}
