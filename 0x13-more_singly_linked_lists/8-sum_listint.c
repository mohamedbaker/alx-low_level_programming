#include "lists.h"

/**
 * sum_listint - sum all data
 * @head: head node
 * Return: sum all
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (!head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
