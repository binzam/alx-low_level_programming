#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, i;

	if (s1 == NULL)
	{
		s1_len = 0;
	}
	else
	{
		for (s1_len = 0; s1[s1_len]; s1_len++)
			;
	}

	if (s2 == NULL)
	{
		s2_len = 0;
	}
	else
	{
		for (s2_len = 0; s2[s2_len] && s2_len < n; s2_len++)
			;
	}

	str = malloc(s1_len + s2_len + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
	{
		str[i] = s1[i];
	}

	for (i = 0; i < s2_len; i++)
	{
		str[s1_len + i] = s2[i];
	}

	str[s1_len + s2_len] = '\0';
	return (str);
}
