#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @args: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int count = argc - 1;

	(void) argv;
	printf("%d\n", count);

	return (0);
}
