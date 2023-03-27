#include "main.h"

/**
 * swap_int - swaps the alues of two integers
 * @a: an integer
 * @b: an integer
 *
 */
void swap_int(int *a, int *b)
{
	int m = *a;

	*a = *b;
	*b = m;
}
