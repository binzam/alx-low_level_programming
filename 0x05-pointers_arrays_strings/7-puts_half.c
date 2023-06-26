#include "main.h"
/**
 * puts_half - Prints the second half of a string
 *              followed by a new line
 * @str: string input to print
 * Description: If string length is odd
 *              print (length- 1) / 2
 */
void puts_half(char *str)
{
	int length, x, half;

	length = 0;

	while (str[length] != '\0')
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length - 1) / 2;

	for (x = half; x < length; x++)
		_putchar(str[x]);

	_putchar('\n');
}
