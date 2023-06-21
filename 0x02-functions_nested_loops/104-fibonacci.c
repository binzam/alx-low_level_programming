#include "main.h"
/**
 * numLength - returns the length of the string
 * @num: operand number
 * Return: number of digits
 */

int numLength(int num)
{
int length = 0;

	if (!num)
	return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}
/**
 * main - entry point
 * Description: prints the first 98 fibonacci numbers
 * strarting from 1 and 2 followed by a new line
 * Return:0 (success)
 */
int main(void)
{
	int order, initial;
	unsigned long fib1 = 1, fib2 = 2, sum, mx = 100000000,
			fib1o = 0, fib2o = 0, sumo = 0;

	for (order = 1; order <= 98; order++)
	{
		if (fib1o > 0)
			printf("%lu", fib1o);
			initial = numLength(mx) - 1 - numLength(fib1);
		while (fib1o > 0 && initial > 0)
		{
			printf("%d", 0);
			initial--;
		}
		printf("%lu", fib1);

		sum = (fib1 + fib2) % mx;
		sumo = fib1o + fib2o + (fib1 + fib2) / mx;
		fib1 = fib2;
		f1o = fib2o;
		fib2 = sum;
		fib2o = sumo;

		if (order != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
