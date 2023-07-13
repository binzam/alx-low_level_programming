#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory allocated with malloc(old_size)
 * @old_size: size of the allocated memory for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr0, *ptr1;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr0 = malloc(new_size);
	if (!ptr0)
		return (NULL);

	ptr1 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr0[i] = ptr1[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr0[i] = ptr1[i];
	}
	free(ptr);
	return (ptr0);
}
