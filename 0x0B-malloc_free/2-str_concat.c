#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 1
 * Return: pointer to the new string created, or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned int i, j, leng1, leng2;

	i = 0;
	j = 0;
	leng1 = 0;
	leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	newStr = malloc(sizeof(char) * (leng1 + leng2 + 1));
	if (newStr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < leng1)
		{
			newStr[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (leng1 + leng2))
		{
			newStr[i] = s2[j];
			i++;
			j++;
		}
	}
	newStr[i] = '\0';

	return (newStr);
}
