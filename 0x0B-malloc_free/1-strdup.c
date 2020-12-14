#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - pointer to a new string which is a duplicate of the string str.
 * @str : string.
 *
 * Return: An array of charactures.
 */

char *_strdup(char *str)
{
char *s;
unsigned int a, size;

if (str == NULL)
{
return (NULL);
}
for (size = 0; *(str + size) != '\0'; size++)
{
}
s = (char *)malloc(sizeof(char) * size + 1);
if (s == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
*(s + a) = *(str + a);
}
return (s);
}
