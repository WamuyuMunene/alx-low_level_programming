#include "main.h"

/**
 * print_chessboard - prints chessboard
 *
 * @a: array
 * @[8]: index
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int down;
	int accross;

	for (down = 0; down < 8; down++)
	{
		for (accross = 0; accross < 8; accross++)
		{
			_putchar(a[down][accross]);
		}
		_putchar('\n');
	}
}
