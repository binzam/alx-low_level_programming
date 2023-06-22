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
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
		/*print i if it's not divisible by 3 or 5*/
			printf("%d ", i);
		}
		printf("\n");
	}
	return (0);
}
