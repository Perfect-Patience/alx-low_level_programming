#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 *op_add - adds2 integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: a+b;
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts b from a
 *@a: integer 1
 *@b: integer 2
 *
 *Return: a-b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies 2 integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: a*b;
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - performs division
 *@a: dividend
 *@b: divisor
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 *op_mod - finds remainder of a division
 *@a: integer 1
 *@b: integer 2
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
