#include "lists.h"

/**
 * pop_listint - Delete head
 * @head: head node
 * Return: data
**/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node_data;

	if (!*head)
		return (0);

	temp = *head;
	*head = temp->next;
	node_data = temp->n;
	free(temp);
	return (node_data);
}
