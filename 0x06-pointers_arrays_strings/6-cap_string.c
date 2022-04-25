#include "main.h"

/**
 *cap_string - capitalizes a string
 *@n: parameter- string name
 *
 * Return: returns a string
 */

char *cap_string(char *n)
{
	int  separators[] = {9, 10, 30, 32, 34, 40, 41, 44, 46, 59, 63, 123, 125};
	int i, j;

	if (n[i] >= 97 && n[i] <= 122)
		n[i] -= 32;
	i++;

	while (n[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (n[i] < separators[j])
				break;
			if (n[i] == separators[j])
			{
				if (n[i + 1] >= 97 && n[i + 1] <= 122)
					n[i + 1] = n[i + 1] - 32;
			}
		}
		i++;
	}
	return (n);
}
