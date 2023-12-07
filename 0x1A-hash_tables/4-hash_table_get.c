#include "hash_tables.h"

/**
 * hash_table_get - Retrieve the value associated with key
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: If the key cannot be found - NULL.
 *         Otherwise - the value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' ||
		ht->array == NULL || ht->size == 0)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[indx];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}
	return (NULL);
}
