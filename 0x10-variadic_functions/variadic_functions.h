#ifndef VARIADIC_H
#define VARIADIC_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include <stdarg.h>
/**
 *struct print_format - formats to print
 *@x: charater to decide format
 *@function: function to cal based on x
 */
typedef struct  print_format
{
	char *x;
	void (*function)(va_list);
} format_type;

#endif
