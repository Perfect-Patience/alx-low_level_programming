#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes
 *@s: parameter 1, pointer to a string.
 *@accept: parameter 2, pointer to a string
 *
 * Return: returns pointer if character is found, else returns null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j;

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
