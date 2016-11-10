#include "holberton.h"
#include <stdlib.h>

/**
 * string_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *result, *empty;

	i = j = k = 0;
	empty = "";
	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	result = malloc(i * sizeof(s1) + j * sizeof(s2));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[k] = s1[i];
		i++;
		k++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		result[k] = s2[j];
		j++;
		k++;
	}
	result[k] = '\0';
	return (result);
}
