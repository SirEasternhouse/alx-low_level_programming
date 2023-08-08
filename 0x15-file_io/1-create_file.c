#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * create_file - create a file with permission
 *@filename: the name of the file to read
 *@text_content: text content to use
 *
 *Return: file created
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);

		if (bytes_written != (ssize_t)content_length)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
