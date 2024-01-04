#include "main.h"
#include <string.h>

/**
 * *_strncpy - copy string
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
