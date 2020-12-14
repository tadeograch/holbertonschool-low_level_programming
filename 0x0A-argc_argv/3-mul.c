#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the name of the program
 *@argc: counts the arguments supplied to the program
 *@argv: arrays of pointers to the string that are supplied to the program
 *
 *Return: 0 success, 1 error
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
