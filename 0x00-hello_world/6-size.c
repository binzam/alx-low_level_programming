#include <stdio.h>
/**
 * main - program prints size of various types on the computer its compiled on
 * Return 0 - Success
*/
int main(void)
{
char l;
int m;
long int n;
long long int o;
float p;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(p));
return (0);
}
