#include <stdio.h>
/**
 * main - entry point
 * Description: print base 16 numbers in lowercase
 * Return: return 0 (success)
 */
int main(void)
{
/*converting 0 into decimal is 48*/
int x = 48;
/*converting f into decimal is 102*/
while (x <= 102)
{
putchar(x);
/*jumoing to a after 9*/
if (x == 57)
x += 39;
x++;
}
putchar('\n');

return (0);
}
