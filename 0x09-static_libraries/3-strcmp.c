#include "main.h"
/**
 *_strcmp - compares s1 and s2
 *@s1: string 1
 *@s2: string 2
 *Return: positive values if s1 > s2, 0 if equal and negative otherwise
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
