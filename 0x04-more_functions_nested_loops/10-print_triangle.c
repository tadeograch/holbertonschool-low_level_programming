#include "holberton.h"
/**
 * print_triangle - Entry point
 * @size: int
 * Return: void (Success)
 */
void print_triangle(int size)
{
	int a, b, c, esp, hash;

	esp = size - 1;
	hash = 1;
	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = esp; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = 0; c < hash; c++)
			{
				_putchar('#');
			}
			esp--;
			hash++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
