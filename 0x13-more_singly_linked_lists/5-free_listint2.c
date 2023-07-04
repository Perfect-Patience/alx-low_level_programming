#include "lists.h"
/**
 *free_listint2 - frees a listint_t list
 *@head : address to pointer to first node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node, *h;

	if (head != NULL)
	{
		h = *head;
		while (h != NULL)
		{
			next_node = h->next;
			free(h);
			h = next_node;
		}
		*head = NULL;
	}
}

