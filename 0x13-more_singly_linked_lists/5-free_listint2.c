#include "lists.h"

/**
 * free_listint2 - free list
 * @head: double ptr head
 * Return: Null
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
