#include "main.h"
/**
 *print_triangle - Prints a traingle followed by newline
 *@size: size of triangle
 */

void print_triangle(int size)
{
	int i, j, m;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			m = 1;
			while (m <= size - i)
			{
				_putchar(' ');
				m++;
			}

			for (j = 0; j < i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
