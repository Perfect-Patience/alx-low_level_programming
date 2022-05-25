#include "main.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string and returns a pointer to the duplicate
 *@str: string to duplicate
 *
 *Return: returns a pointer to the duplicate string, otherwise 0
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	ptr = malloc(sizeof(char) * i);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	return (ptr);
}
