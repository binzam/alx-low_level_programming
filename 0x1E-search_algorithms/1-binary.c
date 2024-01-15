#include "search_algos.h"
/**
 * binary_search -  searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value:  the value to search for.
 * Return: value, or -1 if value is not present or array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	size_t left = 0;
	int right = size - 1;

	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array:");
		int x = left;

		while (x <= right)
		{
			printf(" %d", array[x]);
			if (x < right)
				printf(",");
			x++;
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
