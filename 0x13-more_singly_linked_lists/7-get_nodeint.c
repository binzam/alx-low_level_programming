#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: pointer to head of linked list
 * @index: index of the node to return
 *
 * Return: pointer to the nth node of the list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i < index && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (i == index && temp != NULL)
	{
		return (temp);
	}
	return (NULL);
}
