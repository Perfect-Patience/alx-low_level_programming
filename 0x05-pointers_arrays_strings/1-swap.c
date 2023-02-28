#include "main.h"
/**
 *swap_int - swaps 2 integers
 *@a: pointer to integer 1
 *@b: pointer to integer 2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
