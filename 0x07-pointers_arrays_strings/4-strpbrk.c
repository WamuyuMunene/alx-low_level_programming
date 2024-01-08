#include "main.h"
#include <string.h>

/**
 * *_strpbrk - searches string for any set of bytes
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *search = strpbrk(s, accept);

		if (search != NULL)
		{
			{
			return (search);
			}
		s++;
		}
		else
		{
			return (NULL);
		}
	}
}
