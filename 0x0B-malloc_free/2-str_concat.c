#include "main.h"
#include <stdio.h>
/**
 *str_concat - concatenates 2 strings
 *@s1 : string 1
 *@s2 : string 2
 :*Return: pointer to concatenated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i = 0, j = 0;

	if (s1 != NULL && *s1 != '\0')
	{
		while (s1[i])
			i++;
	}
	if (s2 != NULL && *s2 != '\0')
	{
		while (s2[j])
			j++;
	}
	ptr = malloc(sizeof(int) * (i + j + 2));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	if (s1 != NULL)
	{
		while (s1[i])
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[j])
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
