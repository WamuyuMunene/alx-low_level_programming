#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies memory area
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
