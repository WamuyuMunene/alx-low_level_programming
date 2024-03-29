#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for array
 *
 * @nmemb: int
 * @size: int
 *
 * Return: pointer or null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}

	array = calloc(nmemb, size);

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
