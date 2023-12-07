#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table to print
 * return: Void
 */
void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *node;
	short int flag = 0;

	if (ht == NULL)
	return;

	printf('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			node = node->next;

			if (flag == 0)
				flag = 1;
		}
	}
	printf("}\n");
}
