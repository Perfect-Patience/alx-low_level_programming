#include "main.h"

/**
 *leet - encodes string using leet.
 *@s: parameter- sting name
 *
 * Return: returns string
 */

char *leet(char *s)
{
	char replace[] = {'4', '3', '0', '7', '1'};
	int remove[] = {65, 69, 79, 84, 76};
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == remove[j] || s[i] == (remove[j] + 32))
				s[i] = replace[j];
		}
	i++;
	}
	return (s);
}
