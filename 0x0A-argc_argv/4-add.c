#include <stdio.h>
#include <stdlib.h>
/**
 *main - program that multiplies two numbers.
 *@argc: number of arguments passed for the multiplication
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) < '0' || *(argv[i] + j) > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
