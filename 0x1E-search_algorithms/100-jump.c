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
	size_t temp, bond;

	bond = 0;
	if (array && size != 0)
	{
		while (bond < size && array[bond] < value)
		{
			temp = bond;
			bond  = bond + sqrt(size);
			printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
		}
		if (array[bond] >= value || bond > size)
		{
			printf("Value found between indexes [%ld] and [%ld]\n", temp, bond);
			for (temp = temp; temp <= size - 1; temp++)
			{
				printf("Value checked array[%ld] = [%d]\n", temp, array[temp]);
				if (array[temp] == value)
					return ((int)temp);
			}
		}
	}
	return (-1);
}
