#include  "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints strings
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);
	putchar('\n');
}

