#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: pointer
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}
