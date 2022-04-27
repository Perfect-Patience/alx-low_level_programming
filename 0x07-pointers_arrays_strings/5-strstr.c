#include "main.h"

/**
 *_strstr -  locates a substring
 *@haystack: parameter 1, pointer to a string
 *@needle: parameter 2, string to find.
 *
 *Return: returns string location if found else null.
 */

char *_strstr(char *haystack, char *needle)
{
	char **ptr1;
	char **ptr2;

	while (*haystack != '\0')
	{
		ptr1 = &haystack;
		ptr2 = &needle;
		while (*haystack != '\0' && **ptr2 != '\0' && *haystack  == **ptr2)
		{
			haystack++;
			*ptr2++;
		}
		if (!**ptr2)
			return (*ptr1);
		haystack = *ptr1 + 1;
	}
	return (0);
}
