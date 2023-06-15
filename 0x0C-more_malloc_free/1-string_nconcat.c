#include "main.h"
/**
 *string_nconcat - concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *@n: length of s2 to be added to s1
 *
 * Return: pointer to new string , otherwise NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *p;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}

	if (len2 > n)
		len2 = n;

	p = malloc(sizeof(*p) * (len1 + len2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++)
	{
		p[i] = s2[j];
		i++;
	}

	return (p);
}
