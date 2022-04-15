#include "main.h"

/**
 *_islower - checks if argument is lower
 *@c: first argument
 *
 *Return: 1 if lower case and 0 if upper
 */

int _islower(int c)
{
	if (c <= 122 && c >= 65)
		return (1);
	return (0);
}
