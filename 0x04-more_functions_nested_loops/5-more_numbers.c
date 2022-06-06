#include "main.h"

/**
 *more_numbers - prints numbers from 0-14, 10 times.
 */

void more_numbers(void)
{
	int i, j, m, n;

	for (i = 0; i <= 10; i++)
	{
		m = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				n = j;
			else
				n = 1;
			_putchar(n + '0');
			if (j > 9)
			{
				_putchar(m + '0');
					m++;
			}
		}

		_putchar('\n');
	}
}
