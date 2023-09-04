#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads text file and prints it to the standard output
 *@filename: the name of the file to read
 *@letters: letters to read and print
 *
 *Return: textfile
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t bytesRead;
	ssize_t bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}

	file = fopen(filename, "r");

	if (file == NULL)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	bytesRead = fread(buffer, 1, letters, file);

	if (ferror(file))
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	buffer[bytesRead] = '\0';
	fclose(file);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);

	if (bytesWritten != bytesRead)
	{
		return (0);
	}
	return (bytesRead);
}
