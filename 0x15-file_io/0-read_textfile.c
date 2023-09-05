#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads and prints a text file
 * @filename: The name of the file
 * @letters: The number of letters to read and prin
 *
 * Return: Actual number of letters, 0 on failure to open, read, write
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, byte_read, written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	byte_read = read(fd, buffer, letters);
	if (byte_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, byte_read);
	if (written == -1 || written != byte_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (written);
}
