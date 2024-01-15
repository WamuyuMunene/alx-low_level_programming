#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - returns pointer to mem for copy of str
 *
 * @str: char
 *
 * Return: pointer or null
 */

char *_strdup(char *str)
{
	char *copyof;
	
	if (str == NULL)
	{
		return (NULL);
	}

	copyof = strdup(str);

	if (copyof == NULL)
	{
		return (NULL);
	}

	return (copyof);
}
