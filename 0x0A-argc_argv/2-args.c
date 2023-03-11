#include <stdio.h>
/**
 *main - prints one argumrnt per line
 *@argc : number of arguments
 *@argv: a pointer to the arguments
 *
 *Return: 0, always
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
