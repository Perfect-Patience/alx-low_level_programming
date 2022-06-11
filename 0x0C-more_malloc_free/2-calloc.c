#include "main.h"
#include <stdlib.h>

/**
 *_calloc - allocates and sets memory to 0
 *@nmemb: length of the array
 *@size: sixe of the elements in bytes
 *
 * Return: pointer to allocated memory, otherwise NULL.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
