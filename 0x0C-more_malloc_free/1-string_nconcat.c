#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concanteneates 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: length of s2 to join to s1
 *
 * Return: pointer to concatenated string, or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n < j)
		j = n;

	length = i + j;

	p = malloc(length + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	for (; i < length; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[length++] = '\0';
	return (p);
}
