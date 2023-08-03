#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to evaluate
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index = sizeof(n) * 8;

	if (index >= max_index)
	{
		return (-1);
	}
	return (n >> index & 1);
}
