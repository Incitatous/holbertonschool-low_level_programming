#ifndef DOG_H
#define DOG_H
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - SE
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

#endif
