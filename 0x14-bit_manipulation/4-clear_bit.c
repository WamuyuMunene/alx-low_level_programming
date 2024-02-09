#include "main.h"

/**
 * clear_bit - sets value at index to 0
 *
 * @n: int
 * @index: int
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int temp;

	if (index > 64)
	{
		return (-1);
	}
	temp = index;

	for (i = 1; temp > 0; i *= 2, temp--)
		;
	if ((*n >> index) & 1)
	{
		*n -= i;
	}
	return (1);
}
