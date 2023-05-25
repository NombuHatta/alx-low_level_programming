#include "main.h"

/**
 * more_numbers - prints 10 times the numbers
 *
 */
void more_numbers(void)
{
	int num = 0, i = 0;

	while (i < 10)
	{
		num = 0;

		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar('0' + (num / 10));
			}
			_putchar('0' + ( num % 10));
			num++;
		}
	_putchar('\n');
	i++;
	}
}
