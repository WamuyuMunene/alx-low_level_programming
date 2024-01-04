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
		if (c[index] > 96 && c[index] < 123)
		{
			c[index] = ((c[index] - 'a' + 13) % 26 + 'a');
		}
		else
		{
			c[index] = ((c[index] - 'A' + 13) % 26 + 'A');
		}
		index++;
	}
	return (c);
}
