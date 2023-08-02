#include "main.h"
#include <stddef.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to string to be printed
 *
 */

void _print_rev_recursion(char *s)
{
	if (s == NULL)
	{
		return;
	}

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
