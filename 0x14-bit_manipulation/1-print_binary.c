#include "main.h"
#include <stddef.h>

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print
 */
void print_binary(unsigned long int n)
{
	int shift, bit;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (shift = sizeof(unsigned long int) * 8 - 1; shift >= 0; shift--)
	{
		bit = (n >> shift) & 1;
		if (bit)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || shift == 0)
		{
			_putchar('0');
		}
	}
}
