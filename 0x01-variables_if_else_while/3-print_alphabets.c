#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet in lower and upper case
 * Return:return 0 (success)
*/
	int main(void)
{
	char cxr = 'a';
	char CXR = 'A';
/*print lowercase alphabets*/
	while (cxr <= 'z')
{
		putchar(cxr);
		cxr++;
}
/*print uppercase alphabets*/
	while (CXR <= 'Z')
{
		putchar(CXR);
		CXR++;
}
/*print a new line after printing the alphabets*/
		putchar('\n');
	return (0);
}
