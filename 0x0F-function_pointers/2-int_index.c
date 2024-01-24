#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer
 * @size: int
 * @cmp: pointer
 *
 * Return: int 0/1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
		{
			return (i);
		}
	}
	return (-1);
}
