#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];/*Add element of diagonal 1*/
		sum2 += a[(i + 1) * size - (i + 1)];/*Add element of diagonal 2*/
	}
	printf("%d, %d\n", sum1, sum2);
}
