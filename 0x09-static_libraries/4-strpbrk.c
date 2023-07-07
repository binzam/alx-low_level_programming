#include "main.h"

/**
 * *_strpbrk - search a string for any set of bytes
 * @s: pointer to a string s
 * @accept: pointer to a string accept
 * Return: a pointer to the byte in s that
 *          matches one of the bytes in accept,
 *          or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *p = accept;

		while (*p)
		{
			if (*p++ == *s)
			{
				return ((char *)(s));
			}
		}
		s++;
	}
	return (NULL);
}
