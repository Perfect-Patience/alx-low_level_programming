#include "main.h"

/**
 *_puts - print a srting using pointers
 *@str: parameter of the function.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
