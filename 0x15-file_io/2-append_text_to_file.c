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
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return ((access(filename, F_OK) == 0) ? 1 : -1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, strlen(text_content));

	if (bytes_written < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
