#include <stdio.h>
/**
 * main - Entry point
 * Description:A program that prints all posible
 * diffrent combinations of 2 two digts
 * Return:return 0 (success)
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i != j)
{
printf("%02d %02d, ", i, j);
}
}
}

return (0);
}

