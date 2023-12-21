#include "main.h"

/**
 * main - entry point
 *
 * prints alphabet in lowercase using _putchar
 *
 * Return: void
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a';alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
