#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root of a number,
 *  -1 if n doesnt have a natural number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_recursion_helper(n, 0, n));
}

/**
 * _sqrt_recursion_helper - Recursive helper function to calculate
 * the square root uing binary search
 * @n: The number to calculate the square root of
 * @start: The start of the search
 * @end: The end of search range
 *
 * Return: The square root and thwe number , or -1 if it doesnt nor have
 * a natural square rooy
 */
int _sqrt_recursion_helper(int n, int start, int end)
{
	int mid = (start + end) / 2;

	if (start <= end)
	{
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			return (_sqrt_recursion_helper(n, mid + 1, end));
		else
			return (_sqrt_recursion_helper(n, start, mid - 1));
	}

	return (-1);
}
