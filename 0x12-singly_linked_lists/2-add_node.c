#include "lists.h"

/**
 * add_node - adds a new node
 * @head: list pointer
 * @str: new str
 * Return: new elem add
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(list_t));

	while (str[len])
		len++;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = len;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
