#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Prints a prime number with recursion
 * @n: The number
 *
 * Return: 1 if input integer is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (is_prime_help(n, 2));

}

/**
 * is_prime_help - Performs recursion with divisor
 * @n: The number
 * @div: The divisor
 *
 * Return: The prime number
 */

int is_prime_help(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}

	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_help(n, div + 1));
}
