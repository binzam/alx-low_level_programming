#include <stdio.h>
/**
 * main - entry point
 * Description - print lowercase alphabet except q & e.
 * Return : return 0 (successful)
*/
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
{
	if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}
	letter++;
}

	putchar('\n');
	return (0);
}
