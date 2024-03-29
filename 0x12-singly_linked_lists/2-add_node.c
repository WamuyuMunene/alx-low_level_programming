#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - adds a new node at the start
 *
 * @head: list_t
 * @str: pointer
 *
 * Return: address/null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);

	new->len = len;
	new->next = (*head);

	(*head) = new;
	return (new);
}
