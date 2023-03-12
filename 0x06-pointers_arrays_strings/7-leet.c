#include "main.h"
/**
 *leet - encodes a string using 1337
 *@s: pointer to string
 *
 *Return: encoded string
 */

char *leet(char *s)
{
	int i = 0, j;
	char letter[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char repl[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letter[j])
			{
				s[i] = repl[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
