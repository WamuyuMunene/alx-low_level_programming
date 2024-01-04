#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - convert lowercase to uppercase
 *
 * @str: char
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int index;

	while (str[index] != '\0')
	{
		toupper(str[index]);
		index++;
	}
	return (str);
}
