#include "lists.h"
/**
 *sum_listint - sums all data of a listint linked list.
 *@head: pointer to first node
 *
 * Return: sum of elements, otherwise 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
