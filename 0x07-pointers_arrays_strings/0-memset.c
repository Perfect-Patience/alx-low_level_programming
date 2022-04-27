#include "main.h"

/**
 *_memset -  fills memory with a constant byte
 *@s: parameter 1 pointer to the string
 *@b: parameter 2, char type.
 *@n: parameter 3, integer, number of items to be replaced
 *
 * Return: returns pointer.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
