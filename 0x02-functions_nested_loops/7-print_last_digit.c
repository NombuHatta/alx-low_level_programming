#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @num: the number
 *
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		last_digit = -(num % 10);
	}
	else
	{
		last_digit = num % 10;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
