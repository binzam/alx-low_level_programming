#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int x;

	char key1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*s == key1[x])
			{
				*s = key2[x];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
