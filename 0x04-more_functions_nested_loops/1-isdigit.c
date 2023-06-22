#include "main.h"
/**
 * _isdigit - check if input is digit
 * between 0 -9
 * @c: input
 * Return: 1 if c is digit,else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	/*if c is a digit, return 1*/
		return (1);
	}
	else
	{
	/*if c is not a digit, return 0*/
		return (0);
	}
}
