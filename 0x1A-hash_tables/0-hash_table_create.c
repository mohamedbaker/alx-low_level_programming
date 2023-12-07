#include "hash_tables.h"

/**
 * hash_table_create - Creates  hash table.
 * @size: array size.
 * Return: NULL on error.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = calloc(size ,sizeof(hash_table_t));
	if(!ht)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size , sizeof(hash_node_t *));
	if(!ht-> array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
