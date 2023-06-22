#include "3-calc.h"

/**
 *op_add - adds 2 values
 *@a: integer 1
 *@b: intger 2
 *
 *Return: results, otherwise none.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - suntracts 2 integers
 *@a : integer 1
 *@b: integer 2
 *
 *Return: results
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
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - perfors division
 *@a: int 1
 *@b: int 2
 *
 * Return: result, otherwise Error.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulus
 *@a: int 1
 *@b: int 2
 *
 *Return: result, else Error.
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);

	printf("Eror\n");
	exit(100);
}
