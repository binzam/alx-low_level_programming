#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: decimal number passed by pointer
 * @index: the position, starting from 0 of the bit we want to set
 * Return: 1 (success), -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_index = sizeof(n) * 8;

	if (index > max_index)
		return (-1);

	return (!!(*n |= 1L << index));
}
