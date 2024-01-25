#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings
 *
 * @separator: pointer
 * @n: unsigned int
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *value;
	va_list array;

	va_start(array, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(array, char *);
		if (value != NULL)
		{
			printf("%s", value);
		}
		else if (value == NULL)
		{
			printf("(nil)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(array);
}
