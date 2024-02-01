#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list
 *
 * @h: pointer
 *
 * Return: size_t count
 */

size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *i;

	count = 0;
	i = h;

	while (i != NULL)
	{
		printf("%d %s\n", i->len, i->str);
		i = i->next;
		count++;
	}
	return (count);
}
