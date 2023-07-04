#include "lists.h"
/**
 *free_listint - frees a listint_t list
 *@head: pointer to first node
 *
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	if (head != NULL)
	{
		while (head)
		{
			next_node = head->next;
			free(head);
			head = next_node;
		}
	}
}
