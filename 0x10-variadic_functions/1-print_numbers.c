#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the separator char betxenn the numbers
 * @n: the number of integer to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
