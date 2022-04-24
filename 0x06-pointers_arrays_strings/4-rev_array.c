#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: parameter1- name of array to be reversed
 *@n: parameter2- length of array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
