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
	int i, idx;
	int sum = 0;
	int sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		idx = i * size + i;
		sum = sum + *(a + idx);
	}
	for (i = size; i > 0; i--)
	{
		idx = i * size + (size - i - 1);
		sum_2 = sum_2 + *(a + idx);
	}
	printf("%d, %d\n", sum, sum_2);
}
