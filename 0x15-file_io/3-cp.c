#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Print an error message and exit
 * @code: The exit code
 * @message: The error message
 * @filename: The name of the file
 */
void print_error(int code, const char *message, const char *filename)
{
	dprintf(2, message, filename);
	exit(code);
}

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The vector
 *
 * Return: 0 on success, other values on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];
	char fd_from_str[12];
	char fd_to_str[12];

	if (argc != 3)
		print_error(97, "Usage: cp %s %s\n", argv[1]);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
		print_error(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_read) == -1)
			print_error(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		print_error(98, "Error: Cant read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
	{
		sprintf(fd_from_str, "%d", fd_from);
		print_error(100, "Error: Can't close fd %d\n", fd_from_str);
	}

	if (close(fd_to) == -1)
	{
		sprintf(fd_to_str, "%d", fd_to);
		print_error(100, "Error: Can't close fd %d\n", fd_to_str);
	}

	return (0);
}
