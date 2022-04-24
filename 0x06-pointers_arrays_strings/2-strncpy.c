#include "main.h"

/**
 *_strncpy - copys a string into another.
 *@dest: parameter1- destination of copied string.
 *@src: parameter2- source of string to be copied.
 *@n: parameter3- length of srting to copy
 *
 *Return: returns a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
