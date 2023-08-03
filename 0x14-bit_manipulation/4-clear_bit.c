#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: number to index
 * @index: the bit we want to set
 * Return: 1 (success), -1 (error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(n) * 8;

	if (index >= max_index)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
