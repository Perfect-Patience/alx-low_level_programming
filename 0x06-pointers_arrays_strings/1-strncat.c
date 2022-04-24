#include "main.h"

/**
 *_strncat - contatenates string to a specified length
 *@dest: parameter- destination of contatenation
 *@src: parameter- source of string to be added
 *@n: parameter- length of string to be added.
 *
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n)
	{
		dest[i] = src[j];
		if (src[j] == '\0')
			break;
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
