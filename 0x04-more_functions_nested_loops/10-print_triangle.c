#include "main.h"

/**
 * print_triangle - Print triangle
 * @size: size of the triangle
 * Return: 0(success)
 */

void print_triangle(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			if ((row + col) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
