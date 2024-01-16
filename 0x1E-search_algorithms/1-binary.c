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
	size_t left, right, mid, x;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array:");

		x = left;

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
