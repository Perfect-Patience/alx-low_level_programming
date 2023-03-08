#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: string 1, destiation string
 *@src: string 2
 *@n: length os src to concatenate.
 *Return: pointer to concantenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n; i++)
	{
		if (src[i] != '\0')
			dest[len + i] = src[i];
		else
			break;
	}
	dest[len + i] = '\0';
	return (dest);
}
