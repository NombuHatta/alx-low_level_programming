#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of char and initializes it
 * @size: The size of the array
 * @c: The character used for initialization
 *
 * Return: A pointer to the array, NULL if it fails or if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);


	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		s[i] = c;


	return (s);
}
