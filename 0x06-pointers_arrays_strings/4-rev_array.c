#include "main.h"
/**
 *reverse_array - reverses an array of integers
 *@a: pointer to the array
 *@n: length of array
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	int j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
