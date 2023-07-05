#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * caluculate_coins - calculates the minimum number of coins needed
 * @cents: The amount of cents to make change for
 *
 * Return: The minimum number of coins
 */

unsigned int calculate_coins(int cents)
{
	unsigned int coins = 0;

	if (cents <= 0)
		return (0);

	while (cents >= 25)
	{
		coins++;
		cents -= 25;
	}

	while (cents >= 10)
	{
		coins++;
		cents -= 10;
	}
	while (cents >= 5)
	{
		coins++;
		cents -= 5;
	}
	while (cents >= 2)
	{
		coins++;
		cents -= 2;
	}

	coins += cents;
	return (coins);
}


/**
 * main - Entry point
 * @argc: The argument count
 * @argv: the argument vector
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents, num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	num_coins = calculate_coins(cents);
	printf("%d\n", num_coins);

	return (0);
}
