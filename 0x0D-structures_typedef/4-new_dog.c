#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *new_dog - creates a new dog
 *@name: SE
 *@age: SE
 *@owner:SE
 *Return: An English bulldog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *english_bulldog;

	english_bulldog = malloc(sizeof(dog_t));
	if (english_bulldog == NULL)
		return (NULL);
	(*english_bulldog).name = name;
	(*english_bulldog).age = age;
	(*english_bulldog).owner = owner;
	return (english_bulldog);
}
