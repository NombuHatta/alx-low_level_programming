#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to a string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
