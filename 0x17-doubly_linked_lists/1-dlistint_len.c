#include "lists.h"

/**
 * dlistint_len - prints count of elements in list
 *
 * @h: pointer
 *
 * Return: size
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
