#include "main.h"
#include <stdlib.h>

/**
 * _atoi - convert ASCII to int
 * @s: array
 * Return: 0
 */

int _atoi(char *s)
{
	int value = atoi(s);
	
	while (value >= 48 || value <= 57)
	{
		_putchar(value);
	}
	return (0);
}
