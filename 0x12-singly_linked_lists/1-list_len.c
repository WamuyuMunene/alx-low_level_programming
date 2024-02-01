#include "lists.h"
#include <stdio.h>

/**
 * list_len -return no. of items in linked list
 *
 * @h: pointer list_t
 *
 * Return: size_t count
 */

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *i;

	count = 0;
	i = h;
	while (i != NULL)
	{
		i = i->next;
		count++;
	}
	return (count);
}
