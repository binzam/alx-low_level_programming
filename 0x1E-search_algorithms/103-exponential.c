#include "search_algos.h"

/**
 * binarySearch - searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @low: the starting index.
 * @high: the last index.
 * @value: the value to search for.
 * Return: value, or -1 if value is not present or array is NULL.
 */
int binarySearch(int *array, size_t low, size_t high, int value)
{

	size_t mid, x;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array:");

		x = low;

		while (x <= high)
		{
			printf(" %d", array[x]);
			if (x < high)
			{
				printf(",");
			}
			x++;
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
/**
 * exponential_search -  searches for a value in a sorted array of integers
 *                          using the Exponential search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value:  the value to search for.
 * Return: value, or -1 if value is not present or array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, min_index;

	if (array == NULL)
	{
		return (-1);
	}

	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i < size - 1)
	{
		min_index = i;
	}
	else
	{
		min_index = size - 1;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, min_index);
	return (binarySearch(array, i / 2, min_index, value));
}
