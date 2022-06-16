#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head of list.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while ((ptr = head) != NULL)
	{
		head = head->next;
		free(ptr);
	}
}
