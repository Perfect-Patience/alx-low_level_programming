#include "main.h"
/**
 *_realloc -  reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: he size, in bytes, of the allocated space for ptr
 *@new_size:  the new size, in bytes of the new memory block
 *
 *Return: pointer to allocated memory, otherwise null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t i;
	void *p;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		free(p);
	if (ptr == NULL)
	{
		free(ptr);
		return (p);
	}
	for (i = 0; i < old_size; i++)
	{
		((char *)p)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (p);
}
