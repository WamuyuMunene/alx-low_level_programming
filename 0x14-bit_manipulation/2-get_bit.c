#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 *
 * @n: int
 * @index: int
 *
 * Return: index value or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 64)
	{
		return (-1);
	}

	value = n >> index;

	return (value & 1);
}
