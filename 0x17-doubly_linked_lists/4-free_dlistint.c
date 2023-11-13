#include "lists.h"
#include<stdio.h>

/**
* free_dlistint - function that frees all nodes in a doubly linkedlist
* @head: struct head node.
* Return: void
*/

void free_dlistint(dlistint_t *head)
{

	dlistint_t *temp;

	while (head)
	{
		temp = head;
		free(temp);
		head = head->next;
	}

}
