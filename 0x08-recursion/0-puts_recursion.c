#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - Prints a string
 * @s: String to be printed
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
}
