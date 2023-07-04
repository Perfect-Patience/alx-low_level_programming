#include "lists.h"
/**
 *pop_listint - deletes head node
 *@head: address of pointer to first node.
 *
 * Return: value in first node.
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *h;

	if (head)
	{
		h = *head;
		if (h == NULL)
			return (0);
		value = h->n;
		h = h->next;
		free(*head);
		*head = h;
	}
	return (value);
}
