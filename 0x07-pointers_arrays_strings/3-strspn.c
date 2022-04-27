#include "main.h"

/**
 * _strspn - Finds the length of a prefix substring 
 *@s: paranter 1 pionter to a string
 *@accept: parameter 2, pointer to a string
 *
 *Return: returns the number of accepted bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
