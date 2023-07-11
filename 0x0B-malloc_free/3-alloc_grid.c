#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - a function that creates a two dimensional
 *                  array of integers
 *
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to a 2 dimenstional array of integers(success),
 *         NULL (failure)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			free(array);

		for (j = 0; j <= i; j++)
			free(array[j]);
		return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
