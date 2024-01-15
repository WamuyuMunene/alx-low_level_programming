#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of char and initializes it
 *
 * @size: int
 * @c: char
 * Return: null or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(*array));

	if (array == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
