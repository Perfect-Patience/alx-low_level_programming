#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node at the beginning of a linked list
 *@str: string
 *@head: address of the pointer to first node
 *
 *Return: pointer to new node;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;

	while (str[length])
		length++;

	new->len = length;
	new->str = strdup(str);
	*head = new;
	return (new);
}
