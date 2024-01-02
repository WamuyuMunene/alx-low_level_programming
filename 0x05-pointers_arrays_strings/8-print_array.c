#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array aslong as count < n
 *
 * @a: array
 * @n: int
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int value;

	for (value = 0; value < n; value++)
	{
		if (value != n - 1)
		{
			printf("%d, ", a[value]);
		}
		else
		{
			printf("%d", a[value]);
		}
	}
	printf("\n");
}
