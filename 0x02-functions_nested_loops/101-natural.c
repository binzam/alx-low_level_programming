#include "main.h"
/**
 * main - Entry point
 * Description: Compute the sum of all
 * multiples of 3 or 5 below 1025
 * Return:0 (success)
 */
int main(void)
{
	int sum, number;

	for (number = 0; number < 1024; number++)
	{
		if ((number % 3 == 0) || (number % 5 == 0))
			sum += number;
	}
	printf("%d\n", sum);

	return (0);
}
