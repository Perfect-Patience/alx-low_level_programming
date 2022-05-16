#include <stdio.h>

/**
 *main - Prints all arguments of the program
 *@argc: argument count
 *@argv: array or arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
