#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
