#include "main.h"

/**
 * print_most_numbers - print numbers except 2 and 4
 *
 * Return: void
*/

void print_most_numbers(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		if (numb != 2 && numb != 4)
		{
			_putchar(numb);
		}}
}
