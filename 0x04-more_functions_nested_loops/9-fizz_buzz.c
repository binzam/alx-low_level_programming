#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print numbers from 1 - 100 followed
 * by a new line.
 * For numbers that are multiples of 3,print Fizz
 * For numbers that are multiples of 5,print Buzz
 * For numbers that are multiples of 3 and 5,print FizzBuzz
 * each number and word are separated by space
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
