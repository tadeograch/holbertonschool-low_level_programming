#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L, R, m;

	if (!array)
		return (-1);
	L = 0;
	R = size - 1;
	while (L <= R)
	{
		printf("Searching in array: ");
		print_range(array, L, R);
		m = (L + R) / 2;
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_range - prints the array in between two ranges
 * @array: pointer to the first element of the array to search in
 * @i: init
 * @f: final
 * Return: Nothing
 */
void print_range(int *array, size_t i, size_t f)
{
	size_t n;

	printf("%i", array[i]);
	for (n = i + 1; n <= f; n++)
		printf(", %i", array[n]);
	printf("\n");
}
