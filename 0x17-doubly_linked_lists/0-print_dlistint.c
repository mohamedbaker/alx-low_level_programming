#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t el;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		el++;
	}
	return (el);
}
