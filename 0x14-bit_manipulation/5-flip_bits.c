#include "main.h"

/**
 * flip_bits - bits needed to get from a number to the other
 *
 * @m: int
 * @: int
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int flips;

	flips = n ^ m;

	while (flips)
	{
		count++;
		flips &= (flips - 1);
	}
	return (count);
}
