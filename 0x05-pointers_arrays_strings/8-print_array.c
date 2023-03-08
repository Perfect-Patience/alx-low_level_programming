#include "main.h"
/**
 *print_array - prints a specified length of an array.
 *@a: pointer to a string
 *@n: length of string to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d\n", a[n - 1]);
}
