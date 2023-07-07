#include "main.h"
#include <string.h>

/**
 * *_strcat- concatenate the src string to
 *              the end of the dest string.
 * @dest: pointer to the destination input
 * @src: pointer to source input
 * Return: a pointer to the dest string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
