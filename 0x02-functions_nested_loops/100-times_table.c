# include "main.h"
/**
 *print_times_table -  prints the n times table, starting with 0
 *@n: parameter of function of type int
 */

void print_times_table(int n)
{
	int a, i, div, result = 0;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (a = 0; a <= n; a++)
		{
			result = a * i;
			if (result < 10)
			{
				_putchar('0' + result);
			}
			else if (result >= 100)
			{
				div = result / 10;
				_putchar('0' + div / 10);
				_putchar('0' + div % 10);
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (a + 1 <= n)
			{
				_putchar(',');
				_putchar(' ');
				if (result >= 10)
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
