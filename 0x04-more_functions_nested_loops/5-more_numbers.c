#include "main.h"

/**
 * more_numbers - print 0 - 14 ,10 times
 * followed by a new line
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int line, order, num;

	for (line = 0; line < 11; line++)
	{
		for (order = 0; order < 15; order++)
		{
			num = order;
			if (order > 9)
			{
				_putchar(1 + 48);
				num = order % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
