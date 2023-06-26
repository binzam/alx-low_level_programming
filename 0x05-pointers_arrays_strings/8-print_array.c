#include "main.h"

/**
 * print_array - print n elemnts of an array of integers
 * @a: input elemnet
 * @n: input string
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	printf("\n");
}
