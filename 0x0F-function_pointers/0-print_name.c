#include "function_pointers.h"

/**
 *print_name - prints name
 *@name: pointer to a string containing name
 *@f: pointer to the function that prints the name
 *
 */


void print_name(char *name, void (*f)(char *))
{
	if(f)
		f(name);
}
