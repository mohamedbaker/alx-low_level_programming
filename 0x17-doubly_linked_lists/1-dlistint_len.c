#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Return the number of nodes
 * @h: head pointer
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elementNum = 0;

	while (h != NULL)
	{
	elementNum++;
	h = h->next;
	}
	return (elementNum);
}
