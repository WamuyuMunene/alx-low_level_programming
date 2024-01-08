#include "main.h"
#include <string.h>

/**
 * _strspn - length of prefix of substring
 *
 * @s: pointer
 * @accept: pointer
 *
 * Return: bytes no.
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t size = strspn(s, accept);

	return (size);
}
