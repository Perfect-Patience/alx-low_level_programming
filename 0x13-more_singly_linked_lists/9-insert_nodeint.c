#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to head of a list.
 * @idx: index of the list where the new node is to be inserted.
 * @n: integer.
 *
 * Return: the address of the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h_ptr;

	h_ptr = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h_ptr != NULL; i++)
		{
			h_ptr = h_ptr->next;
		}
	}

	if (h_ptr == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h_ptr->next;
		h_ptr->next = new;
	}

	return (new);
}
