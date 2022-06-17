#include "lists.h"

/**
 * free_listint2 - frees a linked list, sets head to null
 * @head:pointer to head of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr1;
	listint_t *ptr2;

	if (head != NULL)
	{
		ptr2 = *head;
		while ((ptr1 = ptr2) != NULL)
		{
			ptr2 = ptr2->next;
			free(ptr1);
		}
		*head = NULL;
	}
}