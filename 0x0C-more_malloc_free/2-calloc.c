#include "main.h"
/**
 *_calloc -  allocates memory for an array, using malloc
 *@nmemb: number of elements
 *@size: memory sixze of each element
 *
 *Return: pointer to allocated memory, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
