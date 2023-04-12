#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - is a function that creates second array
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the second array,or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int **ar2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar2D = malloc(sizeof(int *) * height);

	if (ar2D == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar2D[i] = (malloc(sizeof(int) * width));
		if (ar2D[i] == 0)
		{
			while (i >= 0)
			{
				free(ar2D[i]);
				i--;
			}
			free(ar2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar2D[i][j] = 0;
		}
	}
	return (ar2D);
}
