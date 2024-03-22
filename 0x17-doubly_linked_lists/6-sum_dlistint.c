#include "lists.h"

/**
 * sum_dlistint - sums data in a list
 *
 * @head: pointer
 *
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
