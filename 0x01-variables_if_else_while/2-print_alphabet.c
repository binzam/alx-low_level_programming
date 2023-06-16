#include <stdio.h>
/**
 * main - entry point
 * Description: print all alfabet letters
 * Return:return 0 (success)
 */
	int main(void)
{
	char cxr = 'a';

	while (cxr <= 'z')
{
	putchar(cxr);
	cxr++;
}
	putchar('\n');

	return (0);
}
