#include "main.h"
#include <string.h>
/**
 * *_strcpy - copy the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Decription: copy the string pointed to by src to the
 *              buffer pointed to by dest
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
