#include "lists.h"

/**
  * add_nodeint_end - add node at the  end
  * @head: head node
  * @n: int
  * Return: NULL in case of failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = malloc(sizeof(listint_t));

	if (!ptr || !head)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
	*head = ptr;
		return (ptr);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
