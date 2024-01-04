#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenate
 *
 * @dest: char
 * @src: char
 * 
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
