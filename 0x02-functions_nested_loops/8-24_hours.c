#include "main.h"

/**
 * jack_bauer - Prints every minute of the day
 *
 */
void jack_bauer(void)
{
	int minute = 0;
	int hour = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

			minute++;
		}

		hour++;
		minute = 0;
	}
}
