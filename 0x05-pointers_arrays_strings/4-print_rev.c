#include "main.h"
/**
 *print_rev - prints a string in reverse
 *@s: string to be reversed.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (; i > 0; i--)
		_putchar(s[i - 1]);
}
