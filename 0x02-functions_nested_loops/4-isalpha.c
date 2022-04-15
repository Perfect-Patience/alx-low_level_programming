#include "main.h"

/**
 *_isalpha - checks if character is uppercase
 *@c: first argument
 *
 *Return: 0 if lower case and 1 if upper
 */

int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
