#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates 2 string to a specified length
 *@s1 : string 1
 *@s2 : string 2
 *@n : length to concatenate.
 *
 *Return : pointer to concatenated string, otherwise NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0, number;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (s2 == NULL)
		number = i;
	else if (n >= j)
		number = i + j;
	else
		number = i + n;

	p = malloc(n + 1);

	if (p == NULL)
		return ('\0');

	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	j = 0;
	for (; i <= number; i++)
	{
		p[i] = s2[j];
		j++;
	}
	p[number + 1] = '\0';
	return (p);
}
