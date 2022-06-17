#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: pointer to head of list.
 */
void free_listp2(listp_t **head)
{
	listp_t *ptr;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((ptr = current) != NULL)
		{
			current = current->next;
			free(ptr);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h:pointer to  head of list.
 *
 * Return: size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t number_of_nodes = 0;
	listp_t *h_ptr, *new, *add;
	listint_t *current;

	h_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = h_ptr;
		h_ptr = new;

		add = h_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&h_ptr);
				return (number_of_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		number_of_nodes++;
	}

	*h = NULL;
	free_listp2(&h_ptr);
	return (number_of_nodes);
}