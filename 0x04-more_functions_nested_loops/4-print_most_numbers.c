#include "main.h"

/**
 * print_most_numbers - print 0 - 9 except
 * 2 and 4,using _putchar twice only
 * Return: 0 (success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
