#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *create_array - creates an array of unknown size and initalizes it
 *@size: size of array to create
 *@c: initial value of array
 *
 * Return: returns pointer to the array created
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
