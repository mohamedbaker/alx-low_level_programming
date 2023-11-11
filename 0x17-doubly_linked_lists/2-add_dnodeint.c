#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Headptr
 * @n: data
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t  *newNode = malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
