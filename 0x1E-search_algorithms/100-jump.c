#include "search_algos.h"

/**
 * jump_search -  Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: A pointer to the first element of the array to serach in
 * @size: The number of elements in array
 * @value:The value to search for
 *
 * Return: -1 if value isn't in array
 *          or the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array && size != 0)
	{
		step = sqrt(size);
		for (i = jump = 0; jump < size && array[jump] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
			i = jump;
			jump += step;
		}

		printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

		jump = jump < size - 1 ? jump : size - 1;
		for (; i < jump && array[i] < value; i++)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		return (array[i] == value ? (int)i : -1);
	}
	return (-1);
}
