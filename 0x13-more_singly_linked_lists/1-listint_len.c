#include "lists.h"

/**
 * listint_len - the number of elems
 * @h: head node
 * Return: nodes count
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
	h = h->next;
	counter++;
	}
	return (counter);
}
