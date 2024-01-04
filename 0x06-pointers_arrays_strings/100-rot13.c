#include "main.h"
#include <ctype.h>

/**
 * *rot13 - replaces with 13th char after it
 *
 * @c: char
 *
 * Return: char
 */

char *rot13(char *c)
{
	int index = 0;

	while (c[index] != '\0')
	{
		if ((c[index] >= 'a' && c[index] <= 'z') || (c[index] >= 'A' && c[index] <= 'Z'))
		{
			char primary = (c[index] >= 'a' && c[index] <= 'z') ? 'a' : 'A';

			c[index] = (c[index] - primary + 13) % 26 + primary;
		}
		index++;
	}
	return (c);
}
