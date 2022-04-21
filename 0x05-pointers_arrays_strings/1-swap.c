#include "main.h"

/**
 *swap_int - swaps the values pointed to by two pointers.
 *@a: argument 1: pointer of type int.
 *@b: argument 2; pointer of type int.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
