#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements and elem numbers
 * @h: head pointer
 * Return: number of elem
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t el = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		el++;
	}
	return (el);
}
