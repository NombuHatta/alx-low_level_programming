#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * error_exit - Print an error message and exit with status 98
 */
void error_exit(void)
{
	char *msg;

	for (msg = "Error\n"; *msg; msg++)
		_putchar (*msg);
	exit(98);
}

/**
 * is_pos_integer - Checks if a string is a positive integer
 * @str: The string to check
 *
 * Return: 1 if positive integer, 0 otherwise
 */
int is_pos_integer(char *str)
{
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply_strings - Multiply two strings containing digits
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The result as a string
 */
char *multiply_strings(char *num1, char *num2)
{
	int len1 = strlen(num1), len2 = strlen(num2), i, j;
	int len_result = len1 + len2;
	int product, sum, start = 0, x, *result;
	char *final_result;

	result = calloc(len_result, sizeof(int));
	if (result == NULL)
		error_exit();

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0');
			sum = product + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}
	final_result = malloc(len_result + 1);
	if (final_result == NULL)
		error_exit();

	while (start < len_result && result[start] == 0)
		start++;
	if (start == len_result)
		return ("0");

	for (x = start; i < len_result; x++)
		final_result[x - start] = result[x] + '0';

	final_result[len_result - start] = '\0';
	free(result);

	return (final_result);
}


/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: The vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *num1, *num2, *result, *c;

	if (argc != 3 || !is_pos_integer(argv[1]) || !is_pos_integer(argv[2]))
		error_exit();

	num1 = argv[1];
	num2 = argv[2];

	result = multiply_strings(num1, num2);

	for (c = result; *c; c++)
		_putchar(*c);

	_putchar('\n');
	free(result);

	return (0);
}
