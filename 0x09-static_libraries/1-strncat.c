#include "main.h"
#include <string.h>
/**
 * *_strncat - function that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: max bytes from @src input
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (dest);
}
