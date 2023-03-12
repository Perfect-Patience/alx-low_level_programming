#include "main.h"
/**
 *cap_string - capitalizes a string
 *@s : string
 *
 *Return: capitalized string
 */

char *cap_string(char *s)
{
	char sep[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int j, i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] > 96 && s[i + 1] < 123)
					s[i + 1] = s[i + 1] - 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
