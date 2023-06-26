#include "main.h"
/**
 * swap_int - swaps the values of teo integers
 * @a: input 1
 * @b: input 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
