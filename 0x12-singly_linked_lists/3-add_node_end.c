#include "lists.h"

/**
 * add_node_end - adds new node at end of a list.
 * @head: head of list.
 * @str: string to add.
 * Return: pointerto head, otherwise NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[i])
		i++;

	new->len = i;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
