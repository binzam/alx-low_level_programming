#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: converted number or 0 if there is one or more
 *          chars in the string other than 0 and 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
