#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * *new_dog - create a new dog
 *
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	(*new_dog).name = strdup(name);
	(*new_dog).owner = strdup(owner);

	if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	(*new_dog).age = age;

	return (new_dog);
}
