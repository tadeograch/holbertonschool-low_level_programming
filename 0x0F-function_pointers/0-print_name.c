#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name using function pointer
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
