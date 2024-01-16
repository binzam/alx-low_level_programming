#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 *
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: value, or -1 if value is not present or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t right = 0, step = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		right += step;
	}

	step = right - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, right);
	right = right >= size ? size - 1 : right;
	while (step <= right)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
