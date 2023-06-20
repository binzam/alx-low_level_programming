#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int line, c;

	for (line = 0; line < 10; line++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
