#include "main.h"

/**
 * main - entry point
 *
 * prints alphabet in lowercase using _putchar
 *
 * Return: 0
*/

int main(void)
{
	int alpha;

	for (alpha = 'a';alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
