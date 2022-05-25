#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: pointer to new string, otherwise null.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (s1 == NULL)
		i = 0;
	if (s2 == NULL)
		j = 0;
	ptr = malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
