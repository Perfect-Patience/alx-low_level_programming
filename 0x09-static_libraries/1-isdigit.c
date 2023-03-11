#include "main.h"
/**
 *_isdigit- checks for digits
 *@c: parameter
 *
 * Return: 1 if digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
