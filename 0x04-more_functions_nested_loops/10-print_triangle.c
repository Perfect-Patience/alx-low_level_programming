#include "main.h"
/**
 *print_triangle- prints a triangle
 *@size: size of the triangle
 */

void print_triangle(int size)
{
	int i, m, n;

	for (i = 1; i <= size; i++)
	{
		m = i;
		while (m < size)
		{
			_putchar(' ');
			m++;
		}
		for (n = 1; n <= i; n++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
