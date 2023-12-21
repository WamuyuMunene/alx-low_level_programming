#include "main.h"

/***
 * print_sign - cheacks if integer is pos/neg/0
 *
 * @n: parameter
 *
 * Return: 0 or 1 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
