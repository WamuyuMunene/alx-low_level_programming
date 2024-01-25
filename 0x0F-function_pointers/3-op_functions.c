#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum
 *
 * @a: int
 * @b: int
 *
 * Return: int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return sutraction value
 *
 * @a: int
 * @b: int
 *
 * Return: -
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return mul valu
 *
 * @a: int
 * @b: int
 *
 * Return: *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division value
 *
 * @a: int
 * @b: int
 *
 * Return: division
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
 * op_mod - return modulo value
 *
 * @a: int
 * @b: int
 *
 * Return: mod value
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
