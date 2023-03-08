#include "main.h"
/**
 *string_toupper - converts string to uppercase
 *@s: string
 *Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0, len = 0;

	while (s[len] != '\0')
		len++;
	for (; i < len; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
	}
	return (s);
}
