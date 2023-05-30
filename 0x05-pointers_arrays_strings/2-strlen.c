#include "main.h"

/**
 * _strlen - Returnsthe length of a string
 * @s: pointer to the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

