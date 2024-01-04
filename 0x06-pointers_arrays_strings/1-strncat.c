#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenate
 *
 * @dest: char
 * @src: char
 * @n: int
 *
 * Return: pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
