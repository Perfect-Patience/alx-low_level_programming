#include "main.h"
/**
 *more_numbers - prints 1-14 ten times
 */

void more_numbers(void)
{
	int i, j, n, m;
	for (i = 0; i <= 10; i++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i < 9)
				n = i;
			else
				n = 1;
			_putchar(n + 48);
			if (i > 9)
			{
				m = 0;
				_putchar(m + 48);
				m++;
			}
		}
	_putchar('\n');
	}
}
