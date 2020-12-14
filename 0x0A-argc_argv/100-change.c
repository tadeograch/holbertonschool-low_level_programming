#include <stdlib.h>
#include <stdio.h>
/**
 *main - program that multiplies two numbers.
 *@argc: number of arguments passed for the multiplication
 *@argv: array of pointer to the arguments
 *
 *Return: 0 success, 1 error.
 */

int main(int argc, char *argv[])
{
	int x, cent = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]);
		if (x < 0)
		{
			printf("0\n");
		}
		else
		{
			for (; x - 25 >= 0; x -= 25, cent++)
			{
			}
			for (; x - 10 >= 0; x -= 10, cent++)
			{
			}
			for (; x - 5 >= 0; x -= 5, cent++)
			{
			}
			for (; x - 2 >= 0; x -= 2, cent++)
			{
			}
			if (x == 1)
			{
				cent++;
			}
			printf("%d\n", cent);
		}
	}
	return (0);
}
