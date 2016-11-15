#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creates structure dog
 * @name: SE
 * @age: SE
 * @owner: SE
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
