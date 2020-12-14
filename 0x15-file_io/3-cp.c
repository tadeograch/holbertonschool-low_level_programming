#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * r_error - Prints the read error and exit.
 * @file: pointer to a file name.
 *
 * Return: Nothing.
 */
void r_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * w_error - Prints the write error and exit.
 * @file: pointer to a file name.
 *
 * Return: Nothing.
 */
void w_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
 * c_error - Prints the close error and exit.
 * @b: bytes.
 *
 * Return: Nothing.
 */
void c_error(int b)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", b);
	exit(100);
}

/**
 * main - Entry point.
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fd1, fd2, w, r = 1, close1;
	char *buf;

	buf = malloc(1024);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		r_error(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (fd2 == -1)
		w_error(argv[2]);
	while (r > 0)
	{
		r = read(fd1, buf, 1024);
		if (r == -1)
		{
			free(buf);
			r_error(argv[1]);
		}
		if (r > 0)
		{
			w = write(fd2, buf, r);
			if (w == -1)
			{
				free(buf);
				w_error(argv[2]);
			}
		}
	}
	close1 = close(fd1);
	if (close1 == -1)
		c_error(fd1);
	close1 = close(fd2);
	if (close1 == -1)
		c_error(fd2);
	return (0);
}
