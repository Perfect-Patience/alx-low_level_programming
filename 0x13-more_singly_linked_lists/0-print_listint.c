#include "lists.h"
#include <stdio.h>
/**
 *print_listint - prints all element of a listint_t list
 *@h: pointer to first node
 *
 *Return: number of nodes printed.
 */


size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
