#include "main.h"

/**
 *_print_rev_recursion -reverseska string
 *@s: pointer to the start of the string to be reversed
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
