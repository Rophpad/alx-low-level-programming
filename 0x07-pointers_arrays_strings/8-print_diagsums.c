#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal of a square
 * matrice integers
 * @a: 2D array
 * @size: an integer repesenting the size of the square matrice
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum_2 += *(a + i * size + size - i - 1);
	}
	printf("%d, %d\n", sum, sum_2);
}
