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
	int index = 0;

	while (str[index] != '\0')
	{
		str[index] = toupper((unsigned char)str[index]);
		index++;
	}
	return (str);
}
