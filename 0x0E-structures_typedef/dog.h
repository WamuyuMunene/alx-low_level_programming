#ifndef _STRUCT_
#define _STRUCT_

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
