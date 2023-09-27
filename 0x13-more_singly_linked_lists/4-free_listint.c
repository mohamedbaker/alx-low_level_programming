#include "lists.h"

/**
 * free_listint - free list
 * @head: head node
 * Return: NULL in case of erroe
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
