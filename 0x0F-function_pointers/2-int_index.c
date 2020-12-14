#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of size elements
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
