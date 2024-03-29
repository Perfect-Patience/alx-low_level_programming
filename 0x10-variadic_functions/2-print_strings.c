#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - prints strings followed by a new line
 *@separator: separator
 *@n: number of arguments passed
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string)
			printf("%s", string);
		else
			printf("(nil)");
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
