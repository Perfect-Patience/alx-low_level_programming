#include "main.h"
/**
 *times_table - prints nine times table
 */

void times_table(void)
{
	int a, b, prod, dig1, dig2;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			prod = a * b;
			if (prod < 10)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(prod + 48);
			}
			else
			{
				dig2 = prod % 10;
				dig1 = (prod - dig2) / 10;
				_putchar(dig1 + 48);
				_putchar(dig2 + 48);
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
