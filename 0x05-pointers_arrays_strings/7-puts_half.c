#include "main.h"

/**
 * puts_half - prints last half of array
 *
 * @str: array
 *
 * Return: void
 */

void puts_half(char *str)
{
	int value;

	for (value = 0; str[value] != '\0'; value++)
	;
	value++;
	for (value /= 2; str[value] != '\0'; value++)
	{
		_putchar(str[value]);
	}
	_putchar('\n');
}
