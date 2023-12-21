#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * prints alphabet in lowercase using _putchar
 *
 * Return: void
*/

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
