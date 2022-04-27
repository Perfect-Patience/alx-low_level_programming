#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@c: parameter 2, type char
 *@s: parameter 1. type char, pointer
 *
 *Return: if found returns pointer else returns null.
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
