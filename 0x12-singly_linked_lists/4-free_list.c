#include "lists.h"
/**
 *free_list - frees list
 *@head: pointer to first node
 *
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}
