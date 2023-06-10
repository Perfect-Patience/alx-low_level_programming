#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry point of code
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int num, count = 0;
	int i;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (num >= cents[i])
			{
				count += num / cents[i];
				num = num % cents[i];
			}
			if (num  == 0)
				break;
		}
		printf("%d\n", count);
	}
	return (0);
}
