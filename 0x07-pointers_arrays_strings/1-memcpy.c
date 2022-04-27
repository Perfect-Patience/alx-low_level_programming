#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: parameter 1 , destination
 *@src: parameter 2, source
 *@n: parameter 3, number of items to copy.
 *
 *Return: returns a pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
