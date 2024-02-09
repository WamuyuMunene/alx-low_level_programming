#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary rep of a dec
 *
 * @n: unsigned long int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int count = sizeof(unsigned long int) * 8 - 1;
	int i;

	while (!(n >> count))
	{
		count--;
	}
	for (i = count; i >= 0; i--)
	{
		if (n & (1ul << i))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
	printf("\n");
}
