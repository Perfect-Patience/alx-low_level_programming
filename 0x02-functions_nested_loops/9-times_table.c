#include "main.h"
/**
 *times_table -prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int a = 0;
	int b;
	int result;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			result = a * b;
			if (b == 0)
				_putchar('0' + result);
			else if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}

