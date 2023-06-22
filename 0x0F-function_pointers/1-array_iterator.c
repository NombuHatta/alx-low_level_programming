#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter on each
 * element of an array
 * @array: The array
 * @size: The size of the array
 * @action: Pointer to the function thats needed to be used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
