#include <stdio.h>
/**
 * main - Entry point
 * Description:A program that prints all posible
 * diffrent combinations of 2 two digts
 * Return:return 0 (success)
 */
int main(void)
{
	int firstn = 0, secondn;

	while (firstn <= 99)
	{
		secondn = firstn;
		while (secondn <= 99)
		{
			if (secondn != firstn)
			{
				putchar((firstn / 10) + 48);
				putchar((firstn % 10) + 48);
				putchar(' ');
				putchar((secondn / 10) + 48);
				putchar((secondn % 10) + 48);

				if (firstn != 98 || secondn != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondn++;
		}
		firstn++;
	}
	putchar('\n');

	return (0);
}
