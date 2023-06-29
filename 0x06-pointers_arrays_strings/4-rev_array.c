#include "main.h"
/**
 * reverse_array - function that reverses the content
 *                  of an array of integers
 * @a: pointer to an array of integeres
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, order;

	for (x = 0; x < n / 2; x++)
	{
		order = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = order;
	}
}
