#include "main.h"

/**
 * print_square - Print a square using the charcater #
 * followed by a new line
 * @size: size of the square
 * Return: 0 (Success)
 */

void print_square(int size)
{
	int row, col;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
