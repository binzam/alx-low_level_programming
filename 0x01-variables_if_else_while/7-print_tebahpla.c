#include <stdio.h>
/**
 * main - entry point
 * Description: Print alphabet backwards
 *
 * Return: return 0 (success)
*/
int main(void)
{
	/*start at 'z' and print backwards*/
	char letter = 'z';

	while (letter >= 'a')
{
		putchar(letter);
		letter--;
}
		putchar('\n');
	return (0);
}
