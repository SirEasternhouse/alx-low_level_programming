#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *copy_file - copy one file to another
 *@file_from: file to copy from
 *@file_to: file to copy to
 *
 *
 *Return: none
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	mode_t old_umask = umask(002);

	fd_from = open(file_from, O_RDONLY);
	umask(old_umask);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
}
/**
 *main - copy the file
 *@argc: file to copy
 *@argv: name of newly copied file
 *
 *
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	struct stat st;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}
	file_from = argv[1];
	file_to = argv[2];

	if (stat(file_from, &st) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		return (98);
	}
	copy_file(file_from, file_to);
	return (0);
}
