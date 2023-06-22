#include "function_pointers.h"

/**
 * int_index- searches for an integer
 * @array: The array to be searched
 * @size: The number of elements in the array
 * @cmp: Pointer to the functionto be used to compare values
 *
 * Return: -1 if no element matches, -1 if size <= 0 or 0 if the
 * index of the first element for which the cmp function does not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);

}
