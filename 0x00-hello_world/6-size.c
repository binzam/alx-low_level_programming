#include <stdio.h>
/**
 * main - program prints size of various types on the computer its compiled on
 * Return 0 - Success
*/
int main(void)
{
printf("Size of char: %zu byte(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %zu byte(s)\n", (unsigned long)sizeof(int));
printf("Size of long int: %zu byte(s)\n", (unsigned long)sizeof(long));
printf("Size of long long int: %zu byte(s)\n", (unsigned long)sizeof(long long));
printf("Size of float: %zu byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
