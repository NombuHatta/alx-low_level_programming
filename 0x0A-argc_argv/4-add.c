#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints added positive numbers from an argument
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j, num, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != '-')
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);
		if (num > 0)
			result += num;
	}
	printf("%d\n", result);
	return (0);

}
