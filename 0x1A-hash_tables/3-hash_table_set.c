#include "hash_tables.h"

/**
 * hash_table_set - Add || update  item in a hash table.
 * @ht: hash table ptr.
 * @key: key to add .
 * @value: key value.
 * Return: on failure - 0, Otherwise  1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	char *valueDup;
	unsigned long int index, iDup;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	valueDup = strdup(value);
	if (valueDup == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (iDup = index; ht->array[iDup]; iDup++)
	{
		if (strcmp(ht->array[iDup]->key, key) == 0)
		{
			free(ht->array[iDup]->value);
			ht->array[iDup]->value = valueDup;
			return (1);
		}
	}

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(valueDup);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = valueDup;
	newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
