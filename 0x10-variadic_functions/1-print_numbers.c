#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Print numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The nuber of integers passed to the function
 * @...: The integers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num, len = 0, j;
	char buffer[12];

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		 if (num == 0)
		 {
			 _putchar('0');
			 continue;
		 }
		 else if (num < 0)
		 {
			 _putchar('-');
			 num = -num;
		 }
		 while (num > 0)
		 {
			 buffer[len++] = num % 10 + '0';
			 num /= 10;
		 }
		 for (j = len -1; j >= 0; j--)
		 {
			 _putchar(buffer[j]);
		 }
		 if (separator != NULL && i < n - 1)
		 {
			 while (*separator != '\0')
			 {
				 _putchar(*separator);
				 separator++;
			 }
		 }
	}
	va_end(args);
	_putchar('\n');
}
