#include "main.h"
#include <stdio.h>
/**
 * printLine - prints a s bytes of a buffer
 *
 * @x: buffer to be printed
 * @y: bytes of buffer to be printed
 * @z: line of buffer to be printed
 *
 */

void printLine(char *x, int y, int z)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (i <= y)
			printf("%02x", x[z * 10 + i]);
		else
			printf("  ");
		if (i % 2)
			putchar(' ');
	}
	for (j = 0; j <= y; j++)
	{
		if (x[z * 10 + j] > 31 && x[z * 10 + j] < 127)
			putchar(x[z * 10 + j]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			printLine(b, 9, i);
		}
		else
		{
			printLine(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
