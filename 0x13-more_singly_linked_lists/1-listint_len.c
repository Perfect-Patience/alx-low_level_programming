#include "lists.h"
/**
 *listint_len - return the number of element in linked list
 *@h: pointer to first node
 *
 * Return: number of elements in a list.
 */


size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h)
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
