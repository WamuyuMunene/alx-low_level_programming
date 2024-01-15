#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns pointer to mem for copy of str
 *
 * @*str: char
 *
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *copyof;

	copyof = strdup(str);

	copyof = (char *) malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	if (copyof == NULL)
	{
		return (NULL);
	}

	return (copyof);
}
