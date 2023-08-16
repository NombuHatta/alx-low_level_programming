#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: The name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
