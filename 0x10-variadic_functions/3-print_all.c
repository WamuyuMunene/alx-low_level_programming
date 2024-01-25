#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 *
 * @format: argument list
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list array;

	va_start(array, format);
	while (format && format[i])
	{
		vprintf(format, array);
		if ("%s" == NULL)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(array);
}
