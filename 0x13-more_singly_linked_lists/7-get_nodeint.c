#include "lists.h"

/**
 * get_nodeint_at_index - the node of indx
 * @head: head node
 * @index: index
 * Return: index ptr
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	for (; count < index; count++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
