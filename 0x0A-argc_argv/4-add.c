#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0 is successful otherwise 1
 */

int main(int argc, char **argv)
{
	int i, sum = 0;
	size_t j;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
