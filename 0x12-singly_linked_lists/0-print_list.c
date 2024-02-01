#include "lists.h"
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
	const list_t *i = h;

	count = 0;

	while (i != NULL)
	{
		if (i->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("%d %s\n", i->len, i->str);
		}
		i = i->next;
		count++;
	}
	return (count);
}
