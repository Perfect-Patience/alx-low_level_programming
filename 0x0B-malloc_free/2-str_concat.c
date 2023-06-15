#include "main.h"
/**
 *str_concat - concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: pointer to concatenated string, else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int i, j;
	char *p;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	p = malloc(len1 + len2 + 1);
	if (p == NULL)
	{
		return (p);
		free(p);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
