#include "main.h"
/**
 *_puts - Prints a string, and a new line
 *@str: pointer to the string to print.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
