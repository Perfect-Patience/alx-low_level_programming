#include "main.h"

/**
 *_isupper - Checks if a character is uppercase
 *@c: character
 *
 * Return: 1 if upper, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
