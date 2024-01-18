#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int nmemb;

	if (min > max)
	{
		return (NULL);
	}

	nmemb = max - min + 1;

	ptr = malloc((nmemb) * sizeof(*ptr));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
