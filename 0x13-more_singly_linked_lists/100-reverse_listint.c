#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to head of linked list.
 *
 * Return: pointer to Head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *ptr1 = NULL;

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
