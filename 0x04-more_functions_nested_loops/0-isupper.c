#include "main.h"
/**
 * _isupper - Check if c is uppercase
 * @c: Input
 * Return: 1 if its uppercase,else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
