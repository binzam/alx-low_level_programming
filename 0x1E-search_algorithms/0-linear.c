#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 *                  using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: first index where value is located or -1 if value is not present
 *          or if array is NULL
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
