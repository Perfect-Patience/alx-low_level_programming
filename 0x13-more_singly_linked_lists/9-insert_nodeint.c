#include "lists.h"
/**
 *insert_nodeint_at_index - nserts a new node at a given position.
 *@head: address of pointer to first node
 *@idx:  index of the list where the new node
 *should be added. Index starts at 0
 *@n: int
 *
 * Return: address of new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev, *next;
	unsigned int count = 0;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		prev = *head;
		while (count != idx - 1 && prev != NULL)
		{
			prev = prev->next;
			count++;
		}

		if (prev == NULL)
			return (NULL);
		next  = prev->next;
		prev->next = new;
		new->next = next;
	}
	return (new);
}
