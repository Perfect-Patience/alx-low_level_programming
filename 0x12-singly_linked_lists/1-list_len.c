#include "lists.h"
/**
 *list_len - returns the number of elements in
 *a linked list.
 *@h: pointer to first node
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			count++;
			h = h->next;
		}
		if (h->next == NULL)
			count++;
	}
	return (count);
}
