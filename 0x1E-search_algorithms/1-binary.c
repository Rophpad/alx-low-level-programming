#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array
 * to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: -1 if value isn't in array
 *         or the index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, start, end;

	if (array)
	{
		for (start = 0, end = size - 1; end >= start;)
		{
			print_arr(array, start, end);
			
			mid = start + (end - start) / 2;
			if (array[mid] == value)
				return (mid);
			if (array[mid] > value)
				end = mid - 1;
			else
				start = mid + 1;
		}
	}

	return (-1);
}

/**
 * print_arr - Prints elements of array
 * @array: The array
 * @l: first index of array
 * @r: last index of array
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
