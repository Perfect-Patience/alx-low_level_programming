#include "main.h"
/**
 *more_numbers - prints 1-14 ten times
 */

void more_numbers(void)
{
	int i, j, n, m;
	for (i = 0; i <= 10; i++)
	{

		m = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				n = j;
			else
				n = 1;
			_putchar(n + 48);
			if (j > 9)
			{
				_putchar(m + 48);
				m++;
			}
		}
	_putchar('\n');
	}
}
