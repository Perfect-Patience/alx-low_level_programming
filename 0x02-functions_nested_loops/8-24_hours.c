#include "main.h"

/**
 *jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	char h1;
	char h2;
	char m1;
	char m2;

	for (h1 = '0'; h1 < '3'; h1++)
	{
		h2 = '0';
		while (h2 <= '9')
		{
			m1 = '0';
			if (h1 == '2' && h2 > '3')
				break;
			while (m1 <= '5')
			{
				m2 = '0';
				while (m2 <= '9')
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
					m2++;
				}
				m1++;
			}
			h2++;
		}
	}
}
