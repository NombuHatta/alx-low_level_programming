#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creat array of chars and initialize
 * @size: The size
 * @c: The character
 *
 * Return: NULL if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
