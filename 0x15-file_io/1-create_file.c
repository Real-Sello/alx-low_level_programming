#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * create_file - creates a file
 *
 * @filename: name of the file created
 *
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int length = 0;
	int len = 0;
	char *ptr;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0, ptr = text_content; *ptr; ptr++)
			len++;
		length = write(file, text_content, len);
	}

	if (close(file) < 0 || len != length)
		return (-1);
	return (1);
}
