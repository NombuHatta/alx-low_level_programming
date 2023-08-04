#include "main.h"
#include <stdio.h>

/**
 * main - Prints all arguments it recieves
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
