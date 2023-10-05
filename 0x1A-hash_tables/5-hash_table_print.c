#include "hash_tables.h"

/**
 * hash_table_print - prints contents of a hash table.
 * @ht: pointer the hash table.
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long i = 0;
	size_t print_flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (print_flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			print_flag++;
			node = node->next;
		}
	}
	printf("}\n");
}
