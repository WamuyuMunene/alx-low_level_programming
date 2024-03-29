#ifndef _STRUCT_
#define _STRUCT_

/**
 * struct dog - definition of structure
 * @name: char
 * @age: float
 * @owner: char
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
