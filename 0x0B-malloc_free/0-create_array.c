#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars,
 *                   and initializes it with a specific char.
 * @size: size of the array
 * @c: char
 * Return: pointer to the array ,or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
