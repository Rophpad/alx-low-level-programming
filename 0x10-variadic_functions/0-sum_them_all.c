#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: integer parameter
 *
 * Return: the sum of n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_list numbers;
	va_start(numbers, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(numbers, int)
	}
	va_end(numbers);
	return (sum);
}
