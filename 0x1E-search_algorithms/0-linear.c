#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * using Linear search algorithm
 * @array: The array where value will be searched
 * @size: The size of array
 * @value: The value to search in array
 *
 * Return: -1 if value isn't found in array
 *          or
 *          The first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
