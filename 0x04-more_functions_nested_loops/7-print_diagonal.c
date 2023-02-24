#include "main.h"
/**
 *print_diagonal- prints  diagonal line
 *@n: length of diagonal
 */

void print_diagonal(int n)
{
	int i, m;

	for (i = 1; i <= n; i++)
	{
		m = 1;
		while (m < i)
		{
			_putchar(' ');
			m++;
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
