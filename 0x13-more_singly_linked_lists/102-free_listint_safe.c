#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: size the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp = NULL;

	if (!h || !(*h))
		return (0);

	while (*h)
	{
		count++;
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			(*h)->next = NULL;
			free(*h);
			*h = temp;
			break;
		}
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;

return (count);
}
