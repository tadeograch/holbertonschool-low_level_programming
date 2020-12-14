#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - eads a text file and prints it to the POSIX standard output.
 * @filename: name of the file.
 * @letters: number of letters it should read and print
 *
 * Return:  number of letters it could read and print or 0 in case of fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t count_w, count_r;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
		return (0);

	*(buf + (letters + 1)) = '\0';

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	count_r = read(fd, buf, letters);

	count_w = write(STDOUT_FILENO, buf, count_r);

	if (count_w != count_r)
		return (0);

	close(fd);

	return (count_w);
}
