#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: pointer
 *
 * Return: unsigned int or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	while (*b != '\0')
	{
		if (*b == 1)
		{
			value == (value << 1) | 1;
		}
		else if (*b == 0)
		{
			value = value << 1;
		}
		else
		{
			exit (98);
			return (0);
		}
		b++;
	}
	return (value);
}
