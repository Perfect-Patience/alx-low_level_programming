#include <stdio.h>

int main(void)
{
	char sep[] = {9, 10, 32, 32, 46};
	int i;

	for (i = 0; i < 5; i++)
	{
		putchar(sep[i]);
		putchar('a');
		putchar('\n');
	}
	return (0);
}	
