
#include "lists.h"
/**
 * add_node - adds new node to beginning of linked list
 * @head: head of the linked list.
 * @str: string to add.
 * Return: address of new head, otherwise null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[i])
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
