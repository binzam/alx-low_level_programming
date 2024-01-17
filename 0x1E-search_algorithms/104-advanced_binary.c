#include "search_algos.h"

/**
 * advanced_binary_recursive - recursivly searches for a value in a sorted
 *						array of integers using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in.
 * @low: The starting index of the [sub]array to search.
 * @high: The ending index of the [sub]array to search.
 * @value: The value to search for.
 * Return: The index where value is located, -1 if value is not present
 * in array or if array is NULL.
 */
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
	size_t mid, x;

	if (low > high)
	{
		return (-1);
	}

	mid = low + (high - low) / 2;

	printf("Searching in array:");
	for (x = low; x <= high; x++)
	{
		printf(" %d", array[x]);
		if (x < high)
		{
			printf(",");
		}
	}
	printf("\n");
	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	if (array[mid] < value)
		return (advanced_binary_recursive(array, mid + 1, high, value));
	return (advanced_binary_recursive(array, low, mid, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value:  the value to search for.
 * Return: value, or -1 if value is not present or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
