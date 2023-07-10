#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to a newly allocated space in memory, NULL (Error)
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	while ((ptr[i] = str[i]) != '\0')
		i++;

	return (ptr);
}
