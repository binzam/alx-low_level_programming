#include <stdio.h>
/**
 * main - entry point
 * Description: print single digits
 *              using int variable &
 *              using putchar function
 * Return: return 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
{
	/*change i into ASCII*/
		putchar(num + '0');
		num++;
}
		putchar('\n');
	return (0);
}
