#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *print_error - print an error message
 *@message: message to print
 *
 *Return: none
 */
void print_error(const char *message)
{
	const char *c;

	c = message;

	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}

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
		print_error("Error creating file");
		return (-1);
	}

	if (text_content == NULL)
	{
		content_length = strlen(text_content);
		bytes_written = write(fd, text_content, content_length);

		if (bytes_written != (ssize_t)content_length)
		{
			close(fd);
			print_error("Error writing to file");
			return (-1);
		}
	}

	close(fd);
	return (1);
}
