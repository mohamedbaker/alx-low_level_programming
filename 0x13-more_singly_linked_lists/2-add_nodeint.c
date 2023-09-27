#include "lists.h"

/**
 * add_nodeint - Add new node
 * @head: head node
 * @n: int of new node
 * Return: new node
**/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (!tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
