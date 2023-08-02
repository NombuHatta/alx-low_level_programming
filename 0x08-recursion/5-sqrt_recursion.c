#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number
 *
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Calculate the square root
 * @n: The number
 * @x: The current guess for the square root
 *
 * Return: The calculated square root
 */

int calculate_sqrt(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (calculate_sqrt(n, x + 1));
}
