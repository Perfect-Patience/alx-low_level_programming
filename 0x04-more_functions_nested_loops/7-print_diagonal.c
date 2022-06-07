#include "main.h"

/**
 *print_diagonal - prints diagonal to the terminal
 *@n: lenght of the diagonal
  */

void print_diagonal(int n)
{
	int i, m;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			m = 0;
			while (i - m > 0)
			{
				_putchar(' ');
				m++;
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
