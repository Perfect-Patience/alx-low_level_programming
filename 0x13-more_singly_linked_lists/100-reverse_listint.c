#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to head of linked list.
 *
 * Return: pointer to Head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr1;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		ptr1 = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = ptr1;
	}

	*head = ptr;
	return (*head);
}
