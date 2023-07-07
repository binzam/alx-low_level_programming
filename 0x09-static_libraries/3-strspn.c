#include "main.h"

/**
 * *_strspn - gets the length of the initial substring s
 * @s: string
 * @accept: string that contains the list of
 *              characters to match in s
 * Return: the characters in the initial segment
 *              of s which consist only of characters from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int idx, j, f, check;

	f = 0;

	for (idx = 0; s[idx] != '\0'; idx++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[idx] == accept[j])
			{
				f++;
				check = 1;
				}
		}
			if (check == 0)
			{
				return (f);
			}
	}
	return (0);
}
