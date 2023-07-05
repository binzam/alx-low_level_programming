#include "main.h"

int isItPrime(int n, int i);

/**
 * is_prime_number - function that returns
 *                  1 if input is prime number
 *
 * @n: number to evaluate
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (isItPrime(n, n - 1));
}

/**
 * isItPrime - function that test if n is a prime number
 * @n: number to evaluate
 * @i: int
 *
 * Return: 1 if n is prime, 0 if it is not
 */

int isItPrime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (i > 0 && n % i == 0)
	{
		return (0);
	}

	return (isItPrime(n, i - 1));
}
