#include "main.h"

/**
 *rev_string - reverses a string
 *@s: parameter of the function
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	char a[count];
	int i;

	s--;
	for (i = count - 1; i >= 0; i--)
	{
		a[i] = *(s - i);
	}
	i = 0;

	count--;
	while (count >= 0)
	{
		*(s - count) = a[i];
		count--;
		i++;
	}
}
