#include "main.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory and initializes it to 0
 *@nmemb : number of elements
 *@size : size of elements in byte
 *Return: pointer to memory of NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p ==  NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;
	return (p);
}
