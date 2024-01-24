#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function on each array elements
 *
 * @array: pointer
 * @size: size_t
 * @action: pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
