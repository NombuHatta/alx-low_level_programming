#include "variadic_functions.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char- Prints a character
 * @args: The va_list containing the character
 */
void print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
}

/**
 * print_int - Print an integer
 * @args: The va_list containing the integer
 */
void print_int(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
}

/**
 * print_float - Print a float
 * @args: The va_list containing the float
 */
void print_float(va_list args)
{
	double num = va_arg(args, double);

	printf("%f", num);
}

/**
 * print_string -Print a string
 * @args: The va_list containing the string
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Print arguments based on the format
 * @format: The format string containing the types of argumrnts
 * @...: The arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == "cifs"[j])
			{
				printf("%s", sep);
				switch (format[i])
				{
					case 'c':
						print_char(args);
						break;
					case 'i':
						print_int(args);
						break;
					case 'f':
						print_float(args);
						break;
					case 's':
						print_string(args);
						break;
				}
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
