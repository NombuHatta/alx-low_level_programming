#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the sum of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int x, sum = 0;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (x = 0; x < strlen(str); x++)
			{
				if (str[x] < 48 || str[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(str);
			str++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
