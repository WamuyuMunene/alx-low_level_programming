#include "main.h"

/**
 * _puts_recursion - print string followed by new line
 *
 * @s: char
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_reecursion(++s);
	}
}
