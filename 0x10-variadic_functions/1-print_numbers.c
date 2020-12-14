#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(valist, int));
			if (i < n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		va_end(valist);
	}
	printf("\n");
}
