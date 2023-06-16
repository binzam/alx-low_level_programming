#include <unistd.h>
/**
 * main - prints a quote using write func.
 * Return: 1 (not success)
 */
int main(void)
{
char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quot, 59);
return (1);
}
