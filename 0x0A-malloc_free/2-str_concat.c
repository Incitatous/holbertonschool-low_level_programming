#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: result or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *result, *length;

	i = j = k = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	length = malloc(sizeof(*s1 + *s2));
	result = malloc(sizeof(length) - sizeof(char));
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
