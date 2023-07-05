#include "lists.h"
/**
 *get_nodeint_at_index - gets nth node of a listint_t linked list
 *@index: index of node
 *@head: pointer to first node
 *Return: pointer found node, otherwise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head)
	{
		while (head != NULL)
		{
			if (count == index)
				return (head);
			count++;
			head = head->next;
		}
	}
	return (NULL);
}
