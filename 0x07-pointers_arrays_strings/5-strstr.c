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
	int i = 0;
	int temp, j;
	int bool = 0;

	for (; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			temp = i;
			bool = 1;
			for (j = 1; needle[j] != '\0'; j++)
			{
				i++;
				if (*(haystack + i) == needle[j])
				{
					bool = 1;
				}
				else
				{
					bool = 0;
					break;
				}
			}
		}
	}
	if (bool == 1)
		return (haystack + temp);
	else
		return ('\0');
}
