#include "lists.h"
#include <stdio.h>
/**
 *print_list - prints all elements in a list
 *@h: pointer to first node;
 *
 * Return: the number of nodes;
 */


size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	if (h->next == NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
