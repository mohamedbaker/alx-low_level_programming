#include "lists.h"
#include<stdio.h>

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: headtpr
 * @n: data
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *newNode = malloc(sizeof(dlistint_t));

	if (!head || !newNode)
		return (newNode ? free(newNode), NULL : NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (*head);
	}
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);

}
