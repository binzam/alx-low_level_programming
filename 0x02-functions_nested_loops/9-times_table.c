#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int i, multi, result;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * multi;
			if (result < 10)
			{
				_putchar(' ');
			}
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
