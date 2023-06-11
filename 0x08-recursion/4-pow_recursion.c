#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: the value being raised
 * @y: the value being raised too
 *
 * Return: value of x raised to the power y or -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	else
		return (x * _pow_recursion(x, y - 1));
}
