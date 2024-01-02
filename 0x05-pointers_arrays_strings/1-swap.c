#include "main.h"

/**
 * swap_int - swap values of two integers
 *
 * @a: int
 * @b: int
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
