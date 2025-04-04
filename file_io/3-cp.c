#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits
 * @code: Exit code
 * @msg: Error message
 * @file: File related to the error
 */
void error_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(code);
}

/**
 * main - Copies content of a file to another
 * @argc: Number of arguments
 * @argv: Arguments vector
 * Return: 0 on success, exits on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, r, w;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to", argv[2]);
	}

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to", argv[2]);
		}
	}
	if (r == -1)
		error_exit(98, "Error: Can't read from file", argv[1]);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}

