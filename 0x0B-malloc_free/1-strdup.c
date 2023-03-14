#include "main.h"
/**
 *_strdup - copies a string into a new memory space
 *@str : pointer to string
 *Return: pointer to copied string
 */

char *_strdup(char *str)
{
	int i, len = 0;
	char *p;

	if (str == NULL)
		return ('\0');
	while (str[len] != '\0')
		len++;
	p = malloc(sizeof(*str) * (len + 1));
	if (p == NULL)
		return ('\0');
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}
