#include "main.h"
#include <stdio.h>

/**
 * *_strchr - fills memory with a constant bye
 * @s: string to put the constant
 * @c: constant
 * Return: a pointer to c, or NULL, if the character is not found
 */
char *_strchr(char *s, char c)
{
		int x;

		while (1)
		{
			x = *s++;
			if (x == c)
			{
				return (s - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
