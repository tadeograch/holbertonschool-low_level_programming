#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 *
 * Return: An array of charactures.
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int a;

if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
arr[a] = c;
}
return (arr);
}
