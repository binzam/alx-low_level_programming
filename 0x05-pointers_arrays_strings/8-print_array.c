#include "main.h"

/**
 * print_array - print n elemnts of an array of integers
 * @a: input elemnet
 * @n: input string
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n - 1; x++)
	{
		printf("%d, ", a[x]);
	}
	printf("%d\n", a[n - 1]);
}
