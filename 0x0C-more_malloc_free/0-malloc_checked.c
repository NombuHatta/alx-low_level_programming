#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates memory
 * @b: The size of memory to allocate
 *
 * Return: Pointer to allocated memory
 * if malloc fails the function terminates the process with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);

}
