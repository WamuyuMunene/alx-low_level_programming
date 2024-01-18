#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates mem using malloc and free
 *
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 *
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	(void) old_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free (ptr);
		return (NULL);
	}

	new_ptr = realloc(ptr, new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	return (new_ptr);
}
