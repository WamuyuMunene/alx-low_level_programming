#include "main.h"
#include <ctype.h>

/**
 * *cap_string - capitalize each word of string
 *
 * @str: string
 *
 * Return: string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (str[index - 1] == ',' ||
			str[index - 1] == ';' ||
			str[index - 1] == '.' ||
			str[index - 1] == '!' ||
			str[index - 1] == '?' ||
			str[index - 1] == '"' ||
			str[index - 1] == '(' ||
			str[index - 1] == ')' ||
			str[index - 1] == '{' ||
			str[index - 1] == '}' ||
			str[index - 1] == '\n' ||
			str[index - 1] == '\t' ||
			str[index - 1] == ' ')
		{
			str[index] = toupper((unsigned char)str[index]);
		}
		index++;
	}
	return (str);
}
