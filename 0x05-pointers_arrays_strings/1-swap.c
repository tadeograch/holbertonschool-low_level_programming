#include "holberton.h"
/**
 * swap_int - Entry point
 * @a: pointer
 * @b: pointer
 * Return: void (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
