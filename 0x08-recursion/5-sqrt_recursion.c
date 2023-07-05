#include "main.h"

int squareRoot(int n, int i);

/**
 * _sqrt_recursion - function that returns the
 *                  natural square root of a number
 * @n: number input
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareRoot(n, 0));
}

/**
 * squareRoot - function that finds the natural
 *              square root of a number using recursion
 * @n: number to calculate
 * @i: int
 * Return: the resulting square root
 */

int squareRoot(int n, int i)
{
	int sqroot = i * i;

	if (sqroot > n)
	{
		return (-1);
	}
	if (sqroot == n)
	{
		return (i);
	}
	return (squareRoot(n, i + 1));
}
