#include "main.h"
#include <string.h>

/**
 * *_strstr - locates substring
 *
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *search = strstr(haystack, needle);

	if (search != NULL)
	{
		return (search);
	}
	else
	{
		return (NULL);
	}
}
