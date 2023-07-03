#include "main.h"

/**
 * *_memset -  a function that fills memory
 *              with a constant byte.
 * @s: pointer to put the constant
 * @b: constant
 * @n: number of bytes to use
 * Return: Pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
