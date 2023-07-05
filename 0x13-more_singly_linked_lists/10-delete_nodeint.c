#include "lists.h"
/**
 *delete_nodeint_at_index - deletes the node at
 *index index of a listint_t linked list
 *@head: address of pointer to first element
 *@index: index to delete
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current, *next;
	unsigned int count = 0;

	if (head)
	{
		if (*head)
		{
			current = *head;
			if (index == 0)
			{
				next = current->next;
				prev = *head;
				free(prev);
				*head = next;
			}
			else
			{
				while (count != index - 1 && current != NULL)
				{
					count++;
					current = current->next;
				}
				if (current == NULL)
					return (-1);
				prev = current;
				current = prev->next;
				next = current->next;
				free(current);
				prev->next = next;
			}
			return (1);
		}
	}
	return (-1);
}
