#include "main.h"

/**
 *_strcat - concatinate strings
 *@dest: first argument of the function being  the destination
 *@src: second argument of the function being the source
 *
 * Return: returns a pointer to the new sring.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
