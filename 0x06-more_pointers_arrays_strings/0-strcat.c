#include "main.h"
/**
 *_strcat - concatenates two strings
 *@dest: string 1, destination of final string
 *@src: pointer to other string
 *Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
