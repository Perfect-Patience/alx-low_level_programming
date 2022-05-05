#include "main.h"

/**
 *_strcmp - compares 2 strings
 *@s1: parameter
 *@s2: parameter
 *
 * Return: 0 if equal.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (diff == 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		break;
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
