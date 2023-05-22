#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'e' && alphabt != 'q')
		putchar(alphabt);
	}

	putchar('\n');
	return (0);
}
