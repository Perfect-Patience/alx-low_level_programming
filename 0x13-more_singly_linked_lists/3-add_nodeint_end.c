#include "lists.h"
/**
 *add_nodeint_end - adds new node at the end of a listint_t list
 *@head: address of pointer to head node
 *@n: int
 *
 * Return: address of a new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head  == NULL)
	{
		*head = new;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new;
	}
	return (new);
}
