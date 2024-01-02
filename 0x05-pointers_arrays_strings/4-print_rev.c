#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: char
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (index >= 0)
		index--;
		{
			_putchar(s[index]);
		}}
		_putchar('\n');
}
