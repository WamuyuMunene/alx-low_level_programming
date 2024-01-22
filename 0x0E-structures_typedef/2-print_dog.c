#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct
 *
 * @d: struct
 *
 * Return: 0/ void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%s\n", (*d).name);
	}
	if ((*d).age < 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("%f\n", (*d).age);
	}
	if ((*d).owner == NULL)
	{
		printf("nil\n");
	}
	else
	{
		printf("%s\n", (*d).owner);
	}
}
