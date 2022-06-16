#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints everything
 *@format: list of types of arguments passed.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	format_type type_f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	char *s = "";
	va_list list;

	va_start(list, format);
	while (format && format[i])
	{
		j = 0;
		while (type_f[j].x != NULL)
		{
			if (*(type_f[j].x) == format[i])
			{
				print("%s", s);
				type_f[j].function(list);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	putchar('\n');
}

/**
 *print_char - prints char type
 *@list: list to print
 */

void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 *print_int - prints integer
 *@list: list to print
 */

void print_int(va_list list)
{
	printf("%i", va_arg(list, int));
}

/**
 *print_float - prints float
 *@list: list to print
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, int));
}
/**
 *print_str - prints string
 *@list: list to print
 */

void print_str(va_list list)
{
	char *string;

	string = va_arg(list, char*);
	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
