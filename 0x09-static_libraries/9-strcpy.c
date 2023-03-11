#include "main.h"
/**
 *_strcpy - copies a string
 *@dest : pointer to the destination of copied string
 *@src : source of string to copy
 *
 * Return: pointer to copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
