#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 * Description: prints the largest prime factor
 * of the number 612852475143
 * Return: 0 (success)
 */
int main(void)
{
long n = 612852475143;
long i;

while (n % 2 == 0)
{
n /= 2;
}

for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
}
}

if (n > 2)
{
printf("%ld\n", n);
}
else
{
printf("%ld\n", i - 2);
}

return (0);
}
