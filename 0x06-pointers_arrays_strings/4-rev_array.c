#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: parameter1- name of array to be reversed
 *@n: parameter2- length of array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
		}
	}
}
