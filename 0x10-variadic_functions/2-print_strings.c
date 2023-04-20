#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char that separe thoses strings
 * @n: the number of strings to print
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if(arg != NULL)
			printf("%s", arg);
		else
			printf("(nil)");
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
