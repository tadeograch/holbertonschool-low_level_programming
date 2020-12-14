#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: argc
 * @argv: argv
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n, i;
	unsigned char *p = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n - 1; i++, p++)
	{
		printf("%02x ", *p);
	}
	printf("%02x\n", *p);
	return (0);
}
