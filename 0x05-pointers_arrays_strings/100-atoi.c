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
	
	if (value <= 48 || value >= 57)
		_putchar(value);
	else
		return (0);
}
