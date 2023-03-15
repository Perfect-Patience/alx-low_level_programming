#include "main.h"
/**
 *str_concat - concatenates 2 strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *
 *Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		len1 = 0;
	}
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 == NULL)
	{
		len2 = 0;
	}
	else
	{
		while (s1[len2] != '\0')
			len2++;
	}

	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (p == NULL)
		return ('\0');
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		p[i] = s2[j];
		i++;
	}
	return (p);
}
