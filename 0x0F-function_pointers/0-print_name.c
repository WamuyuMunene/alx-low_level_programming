#include "main.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: char
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
