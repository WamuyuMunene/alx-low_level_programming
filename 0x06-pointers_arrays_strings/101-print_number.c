#include "main.h"

/**
 * print_number - print int
 * @n: int
 *
 * Return: void
 */

void print_number(int n)
{
	if (n >= 48 && n <= 57 && n < 0)
	{
		_putchar('-');
		_putchar(n);
	}
	else if (n >= 48 && n <= 57 && n > 0)
	{
		_putchar(n);
	}
}
