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
int number;

	for (number = 1; number <= 100; number++)
	{
		if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		if (number != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
