#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - concatenates 2 strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *@n: length of string 2 to concatenate
 *Return: pointer to new string, or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (s2 != NULL)
	{
		while (s2[i])
			i++;
		if (n >= i)
			n = i;
	}

	if (s1 != NULL)
	{
		while (s1[j])
			j++;
	}

	p = malloc(sizeof(*p) * (n + j + 1));
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (j = 0; s1[j] != '\0'; j++)
			p[j] = s1[j];
	}
	if (s2 != NULL)
	{
		for (i = 0; i < n; i++)
		{
			p[j] = s2[i];
			j++;
		}
	}
	p[j] = '\0';
	return (p);
}

