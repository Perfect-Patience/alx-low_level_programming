#include <stdio.h>
/**
 *main - prints the number of arguments passed to it
 *@argc: number of commandline arguments
 *@argv: pointer to arguments
 *Return: 0, always
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
