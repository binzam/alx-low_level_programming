#include "main.h"

/**
 * more_numbers - print 0 - 14 ,10 times
 * followed by a new line
 * Return: 0 (success)
 */
void more_numbers(void)
{
	int line, numbers, num;

	for (line = 0; line < 11; line++)
	{
		for (numbers = 0; numbers < 15; numbers++)
		{
			num = numbers;

			if (numbers > 9)
			{
				_putchar(1 + 48);
				num = numbers % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
