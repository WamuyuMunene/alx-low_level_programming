#include "main.h"

/**
 * _sqrt_recursion - square root
 *
 * @n: int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n - 1));
	}
}
