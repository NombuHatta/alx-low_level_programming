#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - Creates a file with specified permissions
 * @filename: Name of the file
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

		written = write(fd, text_content, len);
		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

