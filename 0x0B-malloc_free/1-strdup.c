#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to newly allocated space
 * @str: The string
 *
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ptr[i] = str[i];

	return (ptr);
}
