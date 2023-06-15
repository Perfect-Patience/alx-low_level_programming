#include "main.h"

/**
 *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *@str: string to be duplicated
 *
 *Return: pointer to duplicate string.
 */
char *_strdup(char *str)
{
	int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;
	p = malloc(i + 1);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		p[i] = str[i];
	return (p);
}
