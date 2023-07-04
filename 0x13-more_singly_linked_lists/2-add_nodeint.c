#include "lists.h"
/**
 *add_nodeint - adds a new node at the beginning of listint_t list
 *@head: address of pointer to first node
 *@n: int
 *
 * Return: new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *h;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	h = *head;
	new->next = h;
	*head = new;
	return (new);
}
