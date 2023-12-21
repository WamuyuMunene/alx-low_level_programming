#include "main.h"

/**
 * _abs - print absolute value of number
 *
 * @a: parameter
 *
 *Return: 0 or - or +
*/

int _abs(int a)
{
	if (a < 0)
	{
		return (-a);
	}
	else if (a > 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
