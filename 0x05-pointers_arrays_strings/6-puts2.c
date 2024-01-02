#include "main.h"

/**
 * puts2 - print every other char in array
 *
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int value;

	for (value = 0; str[value] != '\0'; value++)
	{
		if (value % 2 == 0)
		{
			_putchar(str[value]);
		}
	}
	_putchar('\n');
}
