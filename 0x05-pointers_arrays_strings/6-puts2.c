#include "main.h"

/**
 *puts2 - prints elements of a string skipping one at each stage
 *@str: argument of the function
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str += 2;
	}
	_putchar('\n');
}
