#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message and exits
 * @code: The exit code to use
 * @msg: The error message to display
 * @file: The file name associated with the error
 */
void error_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, file);
	exit(code);
}

/**
 * safe_close - Safely closes a file descriptor and handles any errors
 * @fd: The file descriptor to close
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_file - Copies the content of one file to another
 * @file_from: The file to copy from
 * @file_to: The file to copy to
 */
void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	/* Open the source file */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file", file_from);

	/* Open the destination file (create or truncate) */
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		safe_close(fd_from);
		error_exit(99, "Error: Can't write to", file_to);
	}

	/* Copy the content of file_from to file_to */
	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			safe_close(fd_from);
			safe_close(fd_to);
			error_exit(99, "Error: Can't write to", file_to);
		}
	}

	/* Handle reading errors */
	if (r == -1)
	{
		safe_close(fd_from);
		safe_close(fd_to);
		error_exit(98, "Error: Can't read from file", file_from);
	}

	/* Close both files */
	safe_close(fd_from);
	safe_close(fd_to);
}

/**
 * main - Copies the content of a file to another
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, or exits with appropriate error code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}

