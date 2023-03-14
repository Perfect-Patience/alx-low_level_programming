#include "main.h"
/**
 *create_array - creates an array and assigns it values
 *@size: length of array created
 *@c: value stored in arrays
 *Return: pointer to array
 */


char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');
	p = malloc(size);

	if (p == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
