#include "main.h"

/**
 * get_endianness - cheacks byte order of multibyte data types
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
