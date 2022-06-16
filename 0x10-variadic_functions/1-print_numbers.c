#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - prints numbers followed by newline
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the funtion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("d%", va_arg(list, int));
		if (separator && i < n - 1)
			pritnf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
