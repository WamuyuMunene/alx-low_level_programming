#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable type
 *
 * @d: struct dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
