#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8;
	int flag = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (!flag)
	_putchar('0');
}
