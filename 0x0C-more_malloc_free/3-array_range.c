#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: starting int
 * @max: maximum int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *arr, i, leng;

	if (min > max)
	{
		return (NULL);
	}

	leng = max - min + 1;
	arr = (int *)malloc(leng * sizeof(int));
	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < leng; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
