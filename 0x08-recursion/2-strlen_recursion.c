#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - Returns the length of a string
 * @s: Pointer to the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s == NULL)
	{
		return (0);
	}

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
