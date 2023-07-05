#include "main.h"

/**
 * factorial - function that returns factorial of a given number
 * @n: number input
 * Return: factorial(n)
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
