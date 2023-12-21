#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int alpha;
	int times;

	for (times = 0; times <= 9; times++)
	{
		for ( alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}}
		_putchar('\n');
}
