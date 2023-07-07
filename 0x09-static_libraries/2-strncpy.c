#include <string.h>

/**
 * _strncpy - a function that copies a string
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: bytes od @src
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
