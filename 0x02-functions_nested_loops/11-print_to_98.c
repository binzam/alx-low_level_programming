#include "main.h"
/**
 * print_to_98 - print all natural numbers
 * in order from n to 98 ,separated by a comma
 * @n: input
 */
void print_to_98(int n)
{
if (n == 98)
{
_putchar('9');
_putchar('8');
_putchar('\n');
return;
}
if (n > 98)
{
for (int i = n; i >= 98; i--)
{
int digit = i / 10;
_putchar(digit + '0');
digit = i % 10;
_putchar(digit + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
else
{
for (int i = n; i <= 98; i++)
{
int digit = i / 10;
_putchar(digit + '0');
digit = i % 10;
_putchar(digit + '0');
if (i != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
}
