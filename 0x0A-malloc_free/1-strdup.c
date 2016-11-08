#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to array or NULL
 */
char *_strdup(char *str)
{
	char *my_array;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	my_array = malloc(i * sizeof(str));
	if (my_array == NULL)
		return (NULL);
	while (i >= 0)
	{
		my_array[i] = str[i];
		i--;
	}
	return (my_array);
	free(str);
}
