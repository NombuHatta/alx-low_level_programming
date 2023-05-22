#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;

	printf("Last digit of %d is ", n);

	if (lastdig > 5)
	{
		printf("%d and is greater than 5\n", lastdig);
	}
	else if (lastdig == 0)
	{
		printf("%d and is 0\n", lastdig);
	}
	else
	{
		printf("%d and is less than 6 and not 0\n", lastdig);
	}
	return (0);
}
