#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers\n
 *
 * @separator: pointer
 * @n: unsigned int
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int value;
	va_list array;

	va_start(array, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(array, int);
		printf("%d%s", value, separator);
		if (separator == NULL)
		{
			continue;
		}
		printf("\n");
	}
}
