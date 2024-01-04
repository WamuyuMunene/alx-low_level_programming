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
		c[index] = tolower(c[index]);
		
		if (isalpha(c[index]))
		{
			c[index] = ((c[index] - 97 + 13) % 26 + 97);
		}
		index++;
	}
	return (c);
}
