#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - allocates memory using malloc
 *@b: size to be allocated
 *
 *exit - status 98 if malloc fails
 *Return: pointer to space allocated.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
