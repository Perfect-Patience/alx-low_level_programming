#include "lists.h"
#include <string.h>

/**
 *add_node_end - adds a new node at the end of linked list
 *@head: address of pointer to head node
 *@str: sting;
 *
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length])
		length++;

	new->next = NULL;
	new->str = strdup(str);
	new->len = length;

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
	return (new);
}
