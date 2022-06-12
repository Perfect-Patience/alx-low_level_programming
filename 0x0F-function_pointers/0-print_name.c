#include "function_pointers.h"
/**
 *print_name - prints name
 *@name: pointer to name.
 *@f: pointer to function that prints the name.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
