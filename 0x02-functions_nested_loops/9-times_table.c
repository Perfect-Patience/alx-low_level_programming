#include "main.h"

/**
 *times_table - prints multiples of 9
 */

void times_table(void)
{
	int n1, n2, mul;
	char answer;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			mul = n1 * n2;
			answer = char(mul);

			_putchar(answer);
			if (n2 != 9)
				_putchar(' ' + ',');
			else
				_putchar('\n');
		}
	}
}
