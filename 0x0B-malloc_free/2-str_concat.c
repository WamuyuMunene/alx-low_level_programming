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
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	char *str;

	str = (char *) malloc((strlen(s1) + strlen(s2)) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);

	strcat(str, s2);

	return (str);
}
