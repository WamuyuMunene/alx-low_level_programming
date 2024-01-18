#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	str = malloc((strlen(s1) + n + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(str, s1);

	strncat(str, s2, n);

	return (str);
}
