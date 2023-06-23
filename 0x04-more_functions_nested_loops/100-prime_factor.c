#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Description: prints the largest prime factor
 * of the number 612852475143
 * Return: 0 (success)
 */
int main(void)
{
	long number = 612852475143;
	long i;

	while (number % 2 == 0)
	{
		number /= 2;
	}

	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			number /= i;
		}
	}

	if (number > 2)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", i - 2);
	}

	return (0);
}
