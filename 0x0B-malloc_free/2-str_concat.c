#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - concat s1 and s2
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *str;

	str = (char *) malloc(strlen(strcat(s1, s2)));

	if (str == NULL)
	{
		return (NULL);
	}

	return (str);
}
