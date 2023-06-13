#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new string which is a duplicate of a string
 * @str: pointer to a string
 *
 * Return: Pointer to new string, NULL if str = NULL
 * or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int len = 0;
	unsigned int i;


	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;


	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);

}
