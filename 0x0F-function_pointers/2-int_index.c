#include "function_pointers.h"

/**
 * int_index: a function that searches for an integer
 * @array: arry to search in
 * @size: size of array
 * @cmp: pointer to the function used to compare
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 * or also if size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
			{
				return (i);
			}
	}
	return (-1);
}
