#include "main.h"
#include <string.h>

/**
 * *_memset - fills memory with constant byte
 *
 * @s: char
 * @b: char
 * @n: int
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, (int)b, n);

	return (s);
}
