#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *crnt_node, *next_node;

	crnt_node = head;
	if (head == NULL)
		return;
	while (head != NULL)
	{
	next_node = crnt_node->next;
	free(crnt_node->str);
	free(crnt_node);
	crnt_node = next_node;
	}
}
