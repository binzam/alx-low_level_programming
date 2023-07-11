#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *argstostr - concatenates all arguments of the my program
*
*@ac: argument count.
*@av: pointer to array of size ac.
*
*Return: NULL if ac == 0 or av == null, Pointer to new string or
*          NULL on error
*/

char *argstostr(int ac, char **av)
{
	int i, j;
	int length = 0;
	char *str;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, length++)
		;
		length++;
	}
	length++;

	str = (char *)malloc(length * sizeof(char));

	if (str == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			*str++ = av[i][j++];
		}
		*str++ = '\n';
	}
	*str = '\0';

	return (str - length + 1);
}
