#include "lists.h"

/**
 * pop_listint - pops the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: value of popped nide
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;

	return (n);
}
