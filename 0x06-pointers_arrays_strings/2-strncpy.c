#include "main.h"
/**
 *_strncpy - copys a string
 *@dest: destination of copied string
 *@src: string to be copied
 *@n: length of string to copy. if n > src
 *'\0' is added until length of dest = n
 *Return: des, always.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
