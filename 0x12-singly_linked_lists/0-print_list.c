#include "lists.h"

/**
* print_list - prints all the elements of a linked list
* @h: pointer to the head of the list_t list
*
* Return: the number of nodes in the list_t list
*/
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
