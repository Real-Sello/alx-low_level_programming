#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 *
 * @filename: name of file to read
 *
 * @letters: number of bytes to read from file
 *
 * Return: actual number of letters read, 0 if file cannot be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int length;
	int wrote;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	length = read(fd, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wrote = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(fd);
	if (wrote != length)
		return (0);
	return (length);
}
