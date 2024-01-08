#include "main.h"
#include <string.h>

/**
 * *_strchr - locates character in string
 *
 * @s: char
 * @c: char
 *
 * return:char or null
 */

char *_strchr(char *s, char c)
{
	char *search = strchr(s, c);

	if (search != NULL)
	{
		return (search);
	}
	else
	{
		return (NULL);
	}
}
