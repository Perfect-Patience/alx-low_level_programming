#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the result of multiplication
 *@argc: number of arguments
 *@argv: pointer to string f arguments
 *
 *Return: 0 if successful, otherwise 0
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
