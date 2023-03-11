#include <stdio.h>
/**
 *main - prints the name of a program
 *@argc: number of arguments
 *@argv: pointer to commandline arguments
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
