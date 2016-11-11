#include "holberton.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: min value
 * @max: max value
 * Return: result or NULL
 */
int *array_range(int min, int max)
{
	int *my_array;
	int i, j;

	i = min;
	my_array = malloc((max - min + 1) * sizeof(int));
	if (min > max)
		return (NULL);
	if (my_array == NULL)
		return (NULL);
	for (j = 0; j <= max - min; j++)
	{
		my_array[j] = i;
		i++;
	}
	return (my_array);
}
