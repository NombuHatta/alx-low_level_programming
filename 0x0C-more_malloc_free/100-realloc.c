#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc
 * @ptr: Pointer ro the memory previously allocated
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, copy_size;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	copy_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < copy_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
