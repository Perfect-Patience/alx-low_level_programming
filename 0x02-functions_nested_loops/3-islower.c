#include "main.h"
/**
 *_islower - checks for lowecase letters
 *@c: letter to check
 * Return: 1 if lower, otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	return (0);
}
