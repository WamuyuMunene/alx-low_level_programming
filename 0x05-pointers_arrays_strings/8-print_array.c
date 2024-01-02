#include "main.h"

/**
 * print_array - prints array aslong as count < n
 *
 * @a: array
 * @n: int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int value;

	for (value = 0; value <= n; value++)
	{
		if ( value < n)
		{
			_putchar(a[value]);
			_putchar(44);
			_putchar(32);
		}
		else
		{
			_putchar(a[value]);
		}
		_putchar('\n');
	}
}
