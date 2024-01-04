#include "main.h"

/**
 * reverse_array - reverse int
 *
 * @a: int
 * @n: int
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int first = 0;
	int last = n - 1;

	while (first < last);
	{
	int value = first;
	first = last;
	last = value;
	
	first++;
	last--;
	}
}
