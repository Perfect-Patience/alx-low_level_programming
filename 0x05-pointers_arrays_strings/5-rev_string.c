#include "main.h"
/**
 *rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char c;
	int len = 0;
	int i, j;

	while (s[len] != '\0')
		len++;
	if (len > 0)
	{
		j = len - 1;
		for (i = 0; i <= len / 2; i++)
		{
			c = s[i];
			s[i] = s[j];
			s[j] = c;
			j--;
		}
	}
}
