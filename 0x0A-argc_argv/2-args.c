#include <stdio.h>
/**
 *main - prints the name of the program
 *@argc: counts the arguments supplied to the program
 *@argv: arrays of pointers to the string that are supplied to the program
 *
 *Return: 0 success, 1 error.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
