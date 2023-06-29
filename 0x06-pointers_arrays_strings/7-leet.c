#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	char *pC = s;
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int rep[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*s)
	{
		for (x = 0; x < sizeof(letter) / sizeof(char); x++)
		{
			if (*s == letter[x] || *s == letter[x] + 32)
			{
				*s = 48 + rep[x];
			}
		}
		s++;
	}
	return (pC);
}
