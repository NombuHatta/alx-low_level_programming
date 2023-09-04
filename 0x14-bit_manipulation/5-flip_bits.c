#include "main.h"
#include <stddef.h>

/**
 * flip_bits - Returns the number of bits needed to flip to get from n
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count += result & 1;

		result >>= 1;
	}

	return (count);
}
