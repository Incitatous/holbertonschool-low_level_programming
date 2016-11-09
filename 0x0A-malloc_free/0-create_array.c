#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of the array
 * @c: char
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *my_array;

	i = 0;
	if (my_array != 0)
		my_array = malloc(size * sizeof(char));
	else
		return (NULL);
	while (i < size)
	{
		if (my_array == NULL)
		{
			return (NULL);
		}
		my_array[i] = c;
		i++;
	}
	return (my_array);
}
