#include "main.h"
/**
 *create_array -  creates an array of chars,
 *and initializes it with a specific char
 *@size: size of array
 *@c: character assigned
 *
 *Return: pointer to allocated space , else null
 */



char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(size);
	if (p == NULL || size == 0)
		return ('\0');
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
