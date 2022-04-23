#include "main.h"

/**
 *print_rev - prints the reverse of a string
 *@s: a pointer as a parameter of a function.
 */

void print_rev(char *s)
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
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
