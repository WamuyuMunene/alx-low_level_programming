#include "main.h"

/**
 * print_numbers - print single digit integers
 *
 * Return: void
*/

void print_numbers(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		_putchar(numb);
	}
	_putchar('\n');
}
