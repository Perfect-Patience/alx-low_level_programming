#include "main.h"

/**
 *rev_string - reverses a string
 *@s: a pointer as a parameter of a function.
 */

void rev_string(char *s)
{
	/* get srting length */
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	/* print starting from last value */
	s--;
	while (*s)
	{
		putchar(*s);
		s--;
	}
	_putchar('\n');
}
