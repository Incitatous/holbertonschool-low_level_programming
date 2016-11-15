#include "dog.h"
#include <stdlib.h>

/**
 * struct dog - initializes dog
 * @d: pointer to struct
 * @name: SE
 * @age: SE
 * @owner: SE
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
