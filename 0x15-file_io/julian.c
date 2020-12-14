#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: list of arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, rd = 1, wrt, cl;
	char *buffer;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 00600 | 00060 | 00004);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	while (rd > 0)
	{
		rd = read(fd_from, buffer, 1024);
		if (rd == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		}
		if (rd > 0)
		{
			wrt = write(fd_to, buffer, rd);
			if (wrt == -1)
			{
				free(buffer);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
			}
		}
	}
	free(buffer);
	cl = close(fd_from);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	cl = close(fd_to);
	if (cl == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
