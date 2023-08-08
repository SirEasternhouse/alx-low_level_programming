#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 *append_text_to_file - append text to a file
 *@filename: file to append text to
 *@text_content: text to append
 *
 *Return: 1 success
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (access(filename, F_OK) == -1)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	content_length = strlen(text_content);
	bytes_written = write(fd, text_content, content_length);

	if (bytes_written != (ssize_t)content_length)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
