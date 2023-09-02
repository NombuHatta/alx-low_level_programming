#include "main.h"
#include <stdlib.h>

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to extract
 * @index: The index of the bit to retrieve
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}

